#include<iostream>
using namespace std;

void sectiona(){
    string s;
//    cout << s;
    for(int i = 0; i < s.size(); i++){
        cout << s[i];
    }
}

void sectionb(){
    string s = "abcd";
    cout << s;
    for(int i = 0; i < s.size(); i++){
        cout << s[i];
    }
}

int main(){
    sectionb();
    return 0;
}
