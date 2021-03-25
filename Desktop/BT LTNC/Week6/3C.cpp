#include<iostream>
using namespace std;

int n, k, j;
string s;
int f[50] = {0};
char w[30 ]= {'.', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void print_result(){
    cout << "{ ";
    for(int i = 1; i <= k; i++){
        cout << w[f[i]] << ", ";
    }
    cout << "}";
    cout << endl;
}

void dequy(int i){
    for(int j = f[i-1] + 1; j <= n - k + i; j++){
        f[i] = j;
        if(i == k)
            print_result();
        else
            dequy(i+1);
    }

}

int main(){
    cin >> n >> k;
    if(n >= k){
        dequy(1);
    }
    else cout << "Error!";

    return 0;
}
