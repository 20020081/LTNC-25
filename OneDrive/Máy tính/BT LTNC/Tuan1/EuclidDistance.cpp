#include<bits/stdc++.h>
using namespace std;

int main(){
    int x1, y1, x2, y2;
    cout << "Toa do diem thu nhat: ";
    cin >> x1 >> y1;
    cout << "Toa do diem thu hai: ";
    cin >> x2 >> y2;

    cout << "Khoang cach Euclid = " << sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2));

    return 0;
}
