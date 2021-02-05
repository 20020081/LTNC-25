#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cout << "Nhap nam ban muon kiem tra: ";
    cin >> n;
    if((n % 4 == 0) && (n % 100 != 0))
        return true;
    else if(n % 400 == 0)   return true;
    else cout << "false";

}
