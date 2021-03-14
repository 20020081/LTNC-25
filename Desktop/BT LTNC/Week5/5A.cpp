#include<iostream>
using namespace std;

int main(){
    int n = 27;

    cout << "n at: " << &n << endl;

    //bien tham chieu va doi so la cung mot bien
    int &a = n;
    cout << "a at: " << &a << endl;

    //error
    //int &b;

    //error
    int c;
    int &a = c;



    return 0;
}
