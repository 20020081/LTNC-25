#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int f[n];
    for(int i = 0; i < n; i++){
        cin >> f[i];
    }

    sort(f, f + n);
    int ans = 0;
    for(int i = 0; i < n-1; i++){
        ans += f[i];
    }

    cout << ans;
    return 0;
}
