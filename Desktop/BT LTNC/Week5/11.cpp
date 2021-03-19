#include<iostream>
#include<vector>
using namespace std;

vector <int> arr;

int to_binary(int n){
    while(n>0){
        if(n % 2 == 0){
            arr.push_back(0);
        }
        else arr.push_back(1);

        n /= 2;
    }
}

int main(){
    int n; cin >> n;
    to_binary(n);
    for(int i = arr.size()-1; i >= 0; i--){
        cout << arr[i];
    }

    return 0;
}
