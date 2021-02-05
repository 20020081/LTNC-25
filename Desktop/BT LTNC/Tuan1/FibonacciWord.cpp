#include<iostream>
using namespace std;

string fibword(int n){
    if(n == 0)  return "a";
    if(n == 1)  return "b";
    return fibword(n-1) + fibword(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << fibword(n);
    return 0;
}
