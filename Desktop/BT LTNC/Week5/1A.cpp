#include<iostream>
using namespace std;

int main(){
    int a[3];
    char b[3];

    for(int i = 0; i < 3; i++){
        cout << (void*) &a[i] << ' ';
    }
    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << (void*) &b[i] << ' ';
    }

    //cac bien int chiem 4 bit vi tri
    //cac bien char chiem 2 bit vi tri
    return 0;
}
