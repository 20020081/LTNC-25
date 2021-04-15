#include<iostream>
using namespace std;

// lenh cerr thu 3 khong chay, loi giai phong bo nho, huy vung nho cua con tro c

int main(){
    char* a = new char[10];
    char* c = a + 3;

    for (int i = 0; i < 9; i++) a[i] = 'a';
    a[9] = '\0';
    cerr <<"a: " << "-" << a << "-" << endl;
    cerr <<"c: " << "-" << c << "-" << endl;
    delete c;
    cerr << c << endl;
    cerr << "a after deleting c:" << "-" << a << "-" << endl;


    delete [] a;
    return 0;
}
