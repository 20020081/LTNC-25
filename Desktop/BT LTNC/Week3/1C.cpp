#include<iostream>
using namespace std;

int main(){
    int N; cin >> N;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    bool check = 0;

    sort(arr, arr + N);
    for(int i = 0; i < N-1; i++){
        if(arr[i] == arr[i+1]){
            check = 1;
            break;
        }
    }

    if(check == 1)  cout << "Yes";
    else cout << "No";

    return 0;
}
