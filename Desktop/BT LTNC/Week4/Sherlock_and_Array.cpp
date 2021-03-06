#include<iostream>
#define ll long long
using namespace std;

long long sum_array(int i, int j, int f[]){
    ll total = 0;
    for(int k = i; k < j; k++){
        total += f[k];
    }
    return total;
}

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        int f[n];
        bool check = 0;
        for(int i = 0; i < n; i++){
            cin >> f[i];
        }

        int total_array = 0;
        for(int i = 0; i < n; i++){
            total_array += f[i];
        }

        int tempt = total_array;
        for(int i = 0; i < n; i++){
            total_array -= f[i];

            if(tempt - total_array - f[i]== total_array){
                check = 1;
                break;
            }
        }

        if(check == 1)  cout << "YES";
        else cout << "NO";
        cout << endl;
    }

    return 0;
}
