#include<iostream>
#include<iomanip>
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
        }
        for(i = ci; i < row - ci - 1; i++){
            f[i][j] = m;
            m++;
            // j = 4
        }
        for(j = col - cj - 1; j > cj; j--){
            f[i][j] = m;
            m++;
        }
        for(i = row - ci - 1; i > ci; i--){
            f[i][j] = m;
            m++;
        }
        ci++; cj++; i++;
    }
    if(row == col && row % 2 != 0){
        f[row/2][col/2] = row * col;
    }

    for(i = 0; i < row; i++){
        for(j = 0; j < col; j++){
            cout << setw(2) << f[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
