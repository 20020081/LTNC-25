#include<iostream>
using namespace std;



int main(){
    int a = 10;
    int* p = new int;
    p = &a;

    delete p;

    cout << *p << endl;
    cout << a << endl;
    return 0;
}
