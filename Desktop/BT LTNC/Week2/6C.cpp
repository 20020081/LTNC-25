#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int f[n][n];

    for(int j = 0; j < n; j++){
        f[0][j] = j+1;
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n; j++){
            if(f[i][j] != n){
                f[i+1][j] = f[i][j] + 1;
            }
            else
                f[i+1][j] = 1;
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << f[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
