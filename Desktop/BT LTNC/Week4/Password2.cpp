#include<iostream>
#include<vector>
using namespace std;

bool solve(string s, string x){
    int n = x.size();
    string subs = "";

    for(int i = n-1; i >= 0; i--){
        subs = subs + x[i];
    }

    if(subs == s) return 1;
    else return 0;
}

int main(){
    int t; cin >> t;
    string s[t];
    for(int i = 0; i < t; i++){
        cin >> s[i];
    }

    for(int i = 0; i < t; i++){
        for(int j = i + 1; j < t; j++){
            if(solve(s[i], s[j]) == 1){
                cout << s[i].size() << ' ' << s[i][s[i].size()/2];
            }
        }
    }

    return 0;
}
