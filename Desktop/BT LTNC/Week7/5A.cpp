#include<iostream>
using namespace std;

// warning: dia chi cua bien dia phuong c duoc tra lai [-Wreturn-local-addr]
// output khong in ra gi ca

char* weird_string(){
    char c[] = "12345";

    return c;
}

int main(){
    cout << weird_string();

    return 0;
}
