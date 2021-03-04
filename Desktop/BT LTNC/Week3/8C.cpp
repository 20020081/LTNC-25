#include<iostream>
using namespace std;

int main(){
    long long n, i, j, t; cin >> n;
    long long f[n];
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    for(i = 0; i < n; i++){
        for(j= 0; j < n - i - 1; j++){
            if(f[i] > f[i+1]){
                t = f[i];
                f[i] = f[i+1];
                f[i+1] = t;
            }
        }
    }

    long long ans = 0;
    for(i = 0; i < n-1; i++){
        for(j = 0; j < i; j++)
            ans += f[i];
    }

    cout << ans;
    return 0;
}
