#include<iostream>
using namespace std;

const int N = 1001;
int d[N][N], rock[N][N];
int q_x[N*N], q_y[N*N];
string s;
int row, col, f, r, u, v, res, rootx, rooty;

void convert_string(){
    for(int i = 1; i <= row; i++){
        cin >> s;
        for(int j = 0; j < col; j++){
            if(s[j] == 'Y'){
                rootx = i;
                rooty = j+1;
            }
            if(s[j] == 'R'){
                rock[i][j+1] = 1;
            }
        }
    }
}

void push(int x, int y){
    r++;
    q_x[r] = x;
    q_y[r] = y;
}

void pop(){
    u = q_x[f];
    v = q_y[f];
    ++f;
}

void add(int trow, int tcol){
    if(trow > row)  return;
    if(tcol < 1 || tcol > col)  return;
    if(d[trow][tcol] == 1 || rock[trow][tcol] == 1) return;
    d[trow][tcol] = 1;
    push(trow, tcol);
}

void solve(){
    f = 1; r = 0;
    d[rootx][rooty] = 1;
    push(rootx, rooty);
    while(f <= r){
        pop();
        if(u == row){
            res = 1;
            break;
        }
        add(u+1, v);
        if(rock[u][v-1] == 0)   add(u+1, v-1);
        if(rock[u][v+1] == 0)   add(u+1, v+1);
    }

    if(res == 1)    cout << "YES";
    else cout << "NO";
}

int main(){
    cin >> col >> row;

    convert_string();
    solve();

    return 0;
}
