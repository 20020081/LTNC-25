#include<iostream>
using namespace std;

// bien kieu point va gia tri x co chung dia chi
// gia tri y nam o ô liền kề, cach 4 byte.
// dia chi cua bien Point tinh tu dia chi cua bien dau tien.

struct Point{
    int x;
    int y;
};

void get_address(Point a){
    cout << "address of point: " << &a << endl
         << "address of x: " << &a.x << endl
         << "address of y: " << &a.y;
}

int main(){
    Point a;
    a.x = 1; a.y = 2;
    get_address(a);

    return 0;
}
