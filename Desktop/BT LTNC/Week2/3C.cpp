#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int dot = 1;

    while(n--){
        for(int i = n-1; i >= 0; i--){
            cout << " " << " ";
        }

        for(int i = 1; i <= dot; i++){
            cout << "* ";
        }
        dot += 2;

        cout << endl;
    }

    return 0;
}
