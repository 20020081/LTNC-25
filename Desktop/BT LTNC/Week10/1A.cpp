#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

void print(Point a){
    cout << "(" << a.x << "," << a.y << ")" << endl;
}

int main(){
    Point a;
    a.x = 1; a.y = 2;

    print(a);

    return 0;
}
