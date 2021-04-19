#include<iostream>
#include<cstring>
using namespace std;

struct String{
    int len;
    char* str;

    String(const char* _str){
        int len = strlen(_str);
        str = new char [len];

        strncpy(str, _str, len);
    }

    ~String(){
        delete [] str;
    }

    void print(){
        cout << str << endl;
    }

    void append(const char* s){
        int n = strlen(s);
        char* temp = new char [n];

        strcat(temp, str);
        strcat(temp, s);
        str = temp;
    }
};



int main(){
    String s ("Hello");
    String greeting("Hi");
    greeting.append(" there");

    s.print();
    greeting.print();
    return 0;
}
