#include<iostream>
#include<cstring>
using namespace std;

struct String{
    int len;
    char* str = NULL;
    char* temp = NULL;
    String(const char* _str){
        int len = strlen(_str);
        str = new char [len];

        strncpy(str, _str, len);
    }

    ~String(){
        delete [] str;
        delete [] temp;
    }

    void print(){
        cout << str << endl;
    }

    void append(const char* s){
        int n = strlen(s);
        temp = new char [n];

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
