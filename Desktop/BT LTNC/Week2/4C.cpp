#include<iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int dot = n*2-1, blank = 1;

    for(int i = 0; i < n; i++){
        if(i != 0){
            for(int j = 1; j <= blank; j++){
                cout << "  ";
            }
            blank++;
        }

        for(int k = dot; k >= 1; k--){
            cout << "* ";
        }
        dot -=2;

        cout << endl;
    }

    return 0;
}
