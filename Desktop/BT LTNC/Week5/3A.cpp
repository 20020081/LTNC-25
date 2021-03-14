#include<iostream>
using namespace std;

// pass by value se tao tham tri co gia tri doc lap so voi doi so ban dau
// pass by reference co doi so va tham bien cung dia chi voi nhau

//pass by value
void swap_num1(int x, int y){
    int t = x;
    x = y;
    y = t;

    cout << "Pass by value: x " << " at: " << &x << " y at: " << &y;
    cout << endl;
}

//pass by reference
void swap_num2(int &x, int &y){
    int t = x;
    x = y;
    y = t;

    cout << "Pass by address: x " << " at: " << &x << " y at: " << &y;
    cout << endl;
}

int main(){
    int x, y;
    cin >> x >> y;

    cout << "Origin address: " << &x << " " << &y << endl;
    swap_num1(x, y);
    swap_num2(x, y);

    return 0;
}
