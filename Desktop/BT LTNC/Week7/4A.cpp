#include<iostream>
using namespace std;

int binarySearch(int *p, int x, int left, int right){
    int mid = (left+right-1)/2;

    if(right >= left){
        int mid = left + (right - 1) /2;
        if (*(p+mid) == x)
            return 0;
        else if(*(p+mid) < x)
            return binarySearch(p, x, mid+1, right);
        else
            return binarySearch(p, x, left, mid-1);
    }

    return -1;
}

int main(){
    int f[5] = {0, 50, 100, 121, 300};
    int *p; p = &f[0];
    int n; cin >> n;

    int check = binarySearch(p, n, 0, 4);

    if (check == 0) cout << "YES";
    else cout << "NO";

    return 0;
}
