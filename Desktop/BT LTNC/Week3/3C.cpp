#include<iostream>
using namespace std;

bool check_num(int n){
    string s = to_string(n);
    int len = s.size();
    bool check = 0;

    for(int i = 0; i < len/2; i++){
        if(s[i] != s[len - i - 1]){
            check = 1;
            break;
        }
    }

    if(check == 1)  return 1;
    else return 0;
}

int main(){
    int t; cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int ans = 0;

        for(int i = a; i <= b; i++){
            if(check_num(i) == 0)
                ans++;
        }

        cout << ans << endl;
    }

}



