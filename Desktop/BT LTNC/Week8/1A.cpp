#include<iostream>
using namespace std;

// dia chi cua 2 bien x va y la giong nhau
// do x va y la 2 bien dia phuong, cung kieu du lieu nen thoat khoi ham thi
// bien x duoc xoa di va thay the bang bien y

void f(int xval)
{
    int x;
    x = xval;
    cout << &x << endl;
}

void g(int yval)
{
    int y;
    cout << &y << endl;
}
int main()
{
    f(7);
    g(11);
    return 0;
}
