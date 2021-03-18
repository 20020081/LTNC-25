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

    //cac bien int chiem 4 byte vi tri
    //cac bien char chiem 1 byte vi tri
    return 0;
}
