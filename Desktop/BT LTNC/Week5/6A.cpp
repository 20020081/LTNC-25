#include<iostream>
using namespace std;


bool binary_search1(int f[], int k, int low, int high){
    while(low <= high){
        int mid = (low + high)/2;
        if(f[mid] == k){
            return 1;
        }
        else if(f[mid] < k){
            low = mid + 1;
        }
        else if(f[mid] > k){
            high = mid - 1;
        }
    }
    return 0;
}

int binary_search2(int f[], int k, int low, int high){
    if(low > high) return -1;
    int mid = (low + high )/ 2;
    if(f[mid] == k){
        return 1;
    }
    else if(f[mid] < k){
        return binary_search2(f, k, mid+1, high);
    }
    else if(f[mid] > k){
        return binary_search2(f, k, low, mid-1);
    }
}

int main(){
    int f[10] = {0, 3, 10, 50, 150, 200, 233, 600, 750, 1000};
    int k[4] = {0, 1000, 200, 10000};

    cout << "vong lap" << endl;
    for(int i = 0; i < 4; i++){
        cout << "k = " << k[i] << " -> ";
        if(binary_search1(f, k[i], 0, 9) == 0)
            cout << "Not exist";
        else cout << "Found";
        cout << endl;
    }


    cout << "de quy" << endl;
    for(int i = 0; i < 4; i++){
        cout << "k = " << k[i] << " -> ";
        if(binary_search2(f, k[i], 0, 9) == 1)
            cout << "Found";
        else cout << "Not exist";
        cout << endl;
    }

    return 0;
}
