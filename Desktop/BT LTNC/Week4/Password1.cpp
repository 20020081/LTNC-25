#include<iostream>
#include<vector>
using namespace std;

string reverse_pass(string s){
    int n = s.size();
    string subs = "";

    for(int i = n-1; i >= 0; i--){
        subs = subs + s[i];
    }
    return subs;
}

int main(){
    int t; cin >> t;
    vector <string> str;
    while(t--){
        string s;
        cin >> s;
        str.push_back(s);
    }
    cout << endl;

    for(int i = 0; i < str.size(); i++){
        string tstr = reverse_pass(str[i]);

        for(int j = 0; j < str.size(); j++){
            if(tstr == str[j]){
                cout << tstr.size() << " ";
                cout << tstr[tstr.size()/2];
                return 0;
            }
        }
    }

    return 0;
}
