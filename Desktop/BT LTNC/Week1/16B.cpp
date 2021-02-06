#include <bits/stdc++.h>

using namespace std;

bool ktraint(float N){
    if(N == (int)N)
        return true;
    return false;
}
int main(){
    float x, y, z;
    cout << "Hay nhap 3 so nguyen: ";
    cin >> x >> y >> z;
    while(ktraint(x) == false || ktraint(y) == false || ktraint(z) == false){
        cout << "Xin hay nhap lai: ";
        cin >> x >> y >> z;
    }
    if(x == y && x == z)    cout << "true";
    else cout << false;

    return 0;
}

