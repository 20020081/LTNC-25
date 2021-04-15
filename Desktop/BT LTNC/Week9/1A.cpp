#include<iostream>
#include<cstring>
using namespace std;

char* concat(const char* s1, const char* s2){
    int n = strlen(s1) + strlen(s2);
    char* str = new char [n];
    *str = '\0';

    strcat(str, s1);
    strcat(str, s2);

    return str;
}

int main(){
    char c1[] = "Hello";
    char c2[] = "Word";
    cout << concat(c1, c2);

    return 0;
}
