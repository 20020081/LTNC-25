#include<iostream>
using namespace std;

const int N = 1e5;
int n, f[N] = {0}, col[N], rl[N], lr[N];


void print_result(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(j == f[i])
                cout << "q" << " ";
            else
                cout << "." << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void dequy(int i){

    for(int j = 1; j <= n; j++){
        if(col[j] == 0 && rl[i+j] == 0 && lr[i-j] == 0){
            f[i] = j;
            if(i == n){
                print_result();
            }
            else{
                col[j] = 1; rl[i+j] = 1; lr[i-j] = 1;
                dequy(i+1);
                col[j] = 0; rl[i+j] = 0; lr[i-j] = 0;
            }
        }
    }

}

int main(){
    cin >> n;
    dequy(1);

    return 0;
}



