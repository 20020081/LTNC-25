#include<iostream>
#include<cstring>
using namespace std;

void swap_pointers(char* &x, char* &y)
{
    char *tmp;
    tmp = x;
    x = y;
    y = tmp;
}
//Muốn swap hai biến int, bạn cần dùng tham số là con trỏ tới int,
//muốn swap hai biến con trỏ, bạn phải dùng tham số là con trỏ tới con trỏ.
int main()
{
    char a[] = "I should print second";
    char b[] = "I should print first";
    char *s1 = a;
    char *s2 = b;
//    cout << s1 << " " << s2 << endl;
    char *p1, *p2;
    p1 = s1; p2 = s2;
    swap_pointers(p1, p2);
    cout << "s1 is " << p1 << endl;
    cout << "s2 is " << p2 << endl;

    return 0;
}
