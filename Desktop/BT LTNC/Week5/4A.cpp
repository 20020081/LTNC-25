#include<iostream>
#include<string>
using namespace std;

//mang chi truyen duoc theo co che tham tri
//string co the truyen duoc theo 2 co che tham chieu va tham tri

void arr(int x[]){
    cout << &x << " " << endl;
}

void str(string s){
    cout << &s << " " << endl;
}

void str_reference(string &s){
    cout << &s << " " << endl;
}

void arr_reference(int x[]){
    cout << &x << " " << endl;
}

int main(){
    int f[3] = {1, 2, 3};
    string s = "ltnc-25";

    cout << "origin array: " << &f << endl;
    arr(f);
    arr_reference(f);
    cout << "origin string: " << &s << endl;
    str(s);
    str_reference(s);


    return 0;
}
