#include <bits/stdc++.h>

using namespace std;

bool ktraint(float N){
    if(N == (int)N)
        return true;
    return false;
}
int main(){
    float x, y;
    cout << "Hay nhap vao mot so nguyen: " << endl;
    cin >> x >> y;
    while(ktraint(x) == false ||  ktraint(y) == false){
        cout << "Xin hay nhap lai: " << endl;
        cin >> x >> y;
    }
    double distance = sqrt(x * x + y * y);
    cout << "Do dai cua vector la: " << distance;
    return 0;
}
