#include<iostream>
#define ll long long
using namespace std;


// dia chi cua x giam dan theo moi lan chay
// frame stack = n+1;
ll factorial(ll x){
    cout << "n = " << x << " at: " << &x << endl;
    if(x == 0)  return 1;
    return x * factorial(x - 1);

}

int main(){
    ll n = 6;

    cout << factorial(n);

    return 0;
}
