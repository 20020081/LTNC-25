#include<iostream>
using namespace std;

int ucln(int n, int m){
    if(n > m){
        int t = n;
        n = m;
        m = t;
    }

    for(int i = n; i > 1; i--){
        if(m % i == 0 && n % i == 0){
            return i;
        }
    }
}

int main(){
    int n, m; cin >> n >> m;
    int ans = ucln(n, m);
    cout << ans << endl;

    //kiem tra nguyen to cung nhau
    if(ans == 1)
        cout << "2 so vua nhap la 2 so nguyen to cung nhau"
    return 0;
}
