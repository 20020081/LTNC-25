#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    bool check = 0;

    for(int i = 0; i < n/2; i++){
        if(s[i] != s[n - i - 1]){
            check = 1;
            break;
        }
    }

    if(check == 1)  cout << "No";
    else cout << "Yes";
}
