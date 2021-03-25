#include<iostream>
#define ll long long
using namespace std;

int n;
int const N = 1e5;
ll f[N], t[N];

void print_result(int k){
    for(int j = 0; j <= k; j++){
        cout << f[j] << ' ';
    }
    cout << endl;
}

void solve(int i){
    for(int j = f[i-1]; j <= (n - t[i-1]); j++)
    {
        f[i] = j;
        t[i] = t[i-1] + j;

        if(f[i] == n - t[i-1]){
            print_result(i);
        }
        else
            solve(i+1);
    }
}

int main(){
    cin >> n;
    f[0] = 1;
    t[0] = 0;

    solve(1);
    return 0;
}
