#include <iostream>
#include<cmath>
using namespace std;

bool prime(int n){
    if(n <= 2)
        return 0;
    for(int i = 2; i < sqrt(n); i++){
        if(n % i == 0)
            return 1;
    }
    return 0;
}

int main(){
    int n; cin >> n;
    if(prime(n) == 0)
        cout << "yes";
    else cout << "no";

    return 0;
}
