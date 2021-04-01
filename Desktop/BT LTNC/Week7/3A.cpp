#include<iostream>
using namespace std;

void count_even(int *p, int n){
    int f_ans = 0, s_ans = 0;
    for(int i = 0; i < n; i++){
        if(*(p+i) % 2 == 0){
            f_ans++;
        }
    }
    for(int i = n; i < 10; i++){
        if(*(p+i) % 2 == 0){
            s_ans++;
        }
    }
    cout << f_ans << " " << s_ans;
}

int main(){
    int f[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p;
    p = &f[0];

    count_even(p, 5);

    return 0;
}
