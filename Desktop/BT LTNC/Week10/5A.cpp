#include<iostream>
using namespace std;

struct test{
    int n;
    int arr[5];
};

void print(test a){
    for(int i = 0; i < a.n; i++){
        cout << a.arr[i] << " ";
    }
}

int main(){
    test a;
    a.n = 5;
    for(int i = 0; i < a.n; i++){
        a.arr[i] = i;
    }

    print(a);

    return 0;
}
