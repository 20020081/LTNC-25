#include<iostream>
using namespace std;

int main(){
    int* p = new int;
    int* p2 = p;
    *p = 10;
    delete p; // huy vung nho cua con tro p, thay doi gia tri cua p2, vi p2 dang tro toi p
    cout << *p2;
    delete p2;

    return 0;
}
