#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){
    int N; cin >> N;
    srand(0);
    for(int i = 0; i < 5; i++){
        int num = rand() % N;
        cout << num << endl;
    }

    return 0;
}
