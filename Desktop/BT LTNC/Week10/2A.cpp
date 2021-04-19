#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

void print(Point a){
    cout << "Truyen tham tri: " << &a << endl;
}

void print_(Point &a){
    cout << "Truyen tham chieu: " << &a << endl;
}

int main(){
    Point a;
    a.x = 1; a.y = 2;

    cout << "Dia chi cua a: " << &a << endl;
    print(a); print_(a);

    return 0;
}
