#include<iostream>
using namespace std;

// sizeof mang f ben ngoai ham f lon hon ben trong ham f

int getSize(int *p){
    int n = sizeof(p);

    return n;
}

int main(){
    int f[5];
    int *p;
    p = f;
    cout << sizeof(f) << endl;
    cout << getSize(f);

    return 0;
}
