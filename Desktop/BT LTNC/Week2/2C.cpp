#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; ++i){
        for(int j = n-1-i; j >= 0; j--){
           cout << "*" << " ";
        }
        cout << endl;
        for(int k = 0; k <= i; k++)
            cout << " " << " ";
    }

    return 0;
}
