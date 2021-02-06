#include<iostream>
using namespace std;

int main(){
    int n, t, dem = 0;
    while(1){
        cin >> n;
        dem++;
        if(dem == 1){
            cout << n << " ";
            t = n;
        }
        else{
            if(n == -1){
                cout << n;
                break;
            }
            if(n != t)
                cout << n << " ";
            t = n;
        }
    }

    return 0;
}
