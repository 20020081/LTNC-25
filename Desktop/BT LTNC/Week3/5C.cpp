#include<iostream>
using namespace std;

int main(){
    int row, col;
    cin >> row >> col;
    int f[row][col];
    int m = 1, i = 0, j = 0, ci = 0, cj = 0;

    while(m < row * col){
        for(j = cj; j < col - cj - 1; j++){
            f[i][j] = m;
            m++;
            cout << m << " ";
        }
        for(i = ci; i < row - ci - 1; i++){
            f[i][j] = m;
            m++;
            cout << m << " ";
            // j = 4
        }
        for(j = col - cj - 1; j > cj; j--){
            f[i][j] = m;
            m++;
            cout << m << " ";
        }
        for(i = row - ci - 1; i > ci; i--){
            f[i][j] = m;
            m++;
            cout << m << " ";
        }
        ci++; cj++; i++;
    }
    cout << endl;

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }
}
