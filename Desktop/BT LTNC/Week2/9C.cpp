#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int n;
    cin >> n;
    int f[n][2];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 2; j++){
            cin >> f[i][j];
        }
    }
    ll MINx = 1000000, MINy = 1000000;
    for(int i = 0; i < n; i++){
        if(f[i][0] < MINx)
            MINx = f[i][0];
    }
    for(int i = 0; i < n; i++){
        if(f[i][1] < MINy)
            MINy = f[i][1];
    }
    ll ans = MINx * MINy;
    cout << ans;
}
