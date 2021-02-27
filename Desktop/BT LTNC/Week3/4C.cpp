#include<iostream>
using namespace std;

int detect_mine(char f[][10], int i, int j){
    int mine = 0;
    if(f[i][j+1] == '*') mine++;
    if(f[i][j-1] == '*') mine++;
    if(f[i+1][j+1] == '*') mine++;
    if(f[i+1][j-1] == '*') mine++;
    if(f[i+1][j] == '*') mine++;
    if(f[i-1][j-1] == '*') mine++;
    if(f[i-1][j+1] == '*') mine++;
    if(f[i-1][j] == '*') mine++;

    return mine;
}

int main(){
    int row, col;
    cin >> row >> col;
    char f[10][10];
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cin >> f[i][j];
        }
    }

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(f[i][j] == 42)
                cout << "*" << " ";
            else cout << detect_mine(f, i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}

