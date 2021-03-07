#include<iostream>
using namespace std;

void swap_arr(int &x, int &y){
    int t = x;
    x = y;
    y = t;
}

int main(){
    int n;  cin >> n;
    int A[n+1], B[n+1];
    for(int i = 0; i < n; i++){
        cin >> A[i];
    }
    A[n] = 101;
    for(int i = 0; i <= n; i++){
        cin >> B[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if(A[j] > A[j+1]){
                swap_arr(A[j], A[j+1]);
            }
        }
    }
    for(int i = 0; i < n - 1; i++){
        for(int j = 0; j < n - i; j++){
            if(B[j] > B[j+1]){
                swap_arr(B[j], B[j+1]);
            }
        }
    }

    for(int i = 0; i < n+1; i++){
        if(A[i] != B[i]){
            cout << B[i];
            return 0;
        }
    }
    return 0;
}
