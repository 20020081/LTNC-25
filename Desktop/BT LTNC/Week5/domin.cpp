#include<iostream>
#include<stdlib.h>
#include<ctime>
#include<iomanip>
using namespace std;

int mine;
const int N = 50;
int f[N][N];
int opened[N][N];
int directionx[8]={0,-1,1,0,1,-1,-1,1};
int directiony[8]={-1,0,0,1,1,-1,1,-1};

void build_board(int k);
void print_board();
string get_result(string s);
void bfs(int x, int y, int &safe_pos);
void print_mine();
void gameplay();
void mine_in();

int main(){
    srand(time(0));
    mine_in();
    build_board(mine);
    print_board();
    gameplay();

    return 0;
}

void mine_in(){
    cout << "Board: " << endl << "Width: 10" << "  " << "Height: 10" << endl;
    cout << "Number of mine = ";
    cin >> mine;
    cout << endl;
}

void build_board(int k){
    int numMine = 0, x, y, res;
    while(numMine < k){
        res = rand() % 99;
        x = res / 10 + 1;
        y = res % 10 + 1;

        if(f[x][y] == 0){
            ++ numMine;
            f[x][y]=9;
        }
    }

    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            if(f[i][j] == 9){
                for(int k = 0; k < 8; k++){
                    int row = i + directionx[k];
                    int col = j + directiony[k];

                    if(row <= 10 && row >= 1 && col <= 10 && col >= 1 && f[row][col] != 9)
                        ++f[row][col];
                }
            }
        }
    }
}

void bfs(int x, int y, int &safe_pos){
     int p = 1, r = 0, queu_x[1000], queu_y[1000];
     for(int i = 0; i < 1000; i++){
        queu_x[i] = 0; queu_y[i] = 0;
     }

     ++r;
     queu_x[r] = x;
     queu_y[r] = y;

     while(p <= r){
        int m, n, m1, n1;
        m = queu_x[p];
        n = queu_y[p];
        ++p;

        for(int k = 0; k <= 8; k++){
            m1 = m + directionx[k];
            n1 = n + directiony[k];

            if(m1 >= 1 && n1 >= 1 && m1 <= 10 && n1 <= 10){
                if(f[m1][n1] == 0 && opened[m1][n1] == 0){
                    ++r;
                    queu_x[r] = m1;
                    queu_y[r] = n1;
                    opened[m1][n1] = 1;
                    safe_pos++;
                }

                else if(f[m1][n1] != 0 && opened[m1][n1] == 0){
                    opened[m1][n1] = 1;
                    safe_pos++;
                }
            }
        }
     }

}

void gameplay(){
    int x,y,safe_pos=0;
    while (1){
        if (safe_pos == 100 - mine) {
            get_result("YOU WIN!");
            break;
        }
        cout << endl << "Nhap toa do x va y: ";
        cin >> x >> y;
        if (x > 10 || x < 1 || y > 10 || y < 1 || opened[x][y]==1) {
            cout << "Invalid!" << endl;
            continue;
        }
        if (f[x][y]==9) {
            get_result("YOU'RE DEAD!");
            break;
        }
        opened[x][y]=1;
        ++safe_pos;
        if (f[x][y]==0) bfs(x,y,safe_pos);
        print_board();
    }
}

string get_result(string s){
    system("cls");
    cout << s << endl;
    cout << endl;
    print_mine();
}

void print_board(){
    system("cls");
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= 10; j++){
            if (opened[i][j]==0) cout << setw(2) << ".";
            else if (f[i][j]>0) cout << setw(2) << f[i][j];
            else cout << setw(2) << "_";
        }
        cout << endl;
    }
}

void print_mine(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            if(f[i][j] == 9)    cout << setw(2) << "*";
            else if (f[i][j]>0) cout << setw(2) << f[i][j];
            else cout << setw(2) << "_";
        }
        cout << endl;
    }
}


