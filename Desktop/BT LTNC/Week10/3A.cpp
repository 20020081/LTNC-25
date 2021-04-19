#include<iostream>
using namespace std;

struct Point{
    int x;
    int y;
};

void mid_point(const Point a, const Point b){
    cout << "(" << (a.x+b.x)/2 << "," << (a.y+b.y)/2 << ")" << endl;
}

int main(){
    Point a, b;
    a.x = 1; a.y = 2;
    b.x = 3; b.y = 2;
    mid_point(a, b);

    return 0;
}
