#include<iostream>
using namespace std;

void sectiona(){
    for(int i = 0; i <= 100; i+= 2){
        cout << i << " ";
    }
}

void sectionb(){
    int n = 0;
    while(1){
        if(n % 2 == 0)  cout << n << " ";
        n++;
        if(n > 100) break;
    }
}

void sectionc(){
    for(int i = 0; i <= 100; i++){
        if(i % 2 == 0)
            cout << i << " ";
    }
}

void sectiond(){
    int n = 0;
    while(1){
        cout << n << " ";
        n += 2;
        if(n > 100)
            break;
    }
}

void sectione(){
    for(int i = 0; i <= 100; i++){
        if(i % 2 != 0)
            continue;
        cout << i << " ";
    }
}

int main(){
    sectione();

    return 0;
}
