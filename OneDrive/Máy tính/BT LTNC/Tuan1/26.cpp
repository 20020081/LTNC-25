#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, n; cin >> n;
    int arr[n], sum = 0;
    for(i = 0 ; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    double mean = sum / n;
    cout << "Mean: " << mean << endl
         << "Max: " << arr[n-1] << endl
         << "Min: " << arr[0];
}
