#include<iostream>
using namespace std;

void sectiona(){
//    char daytab[2][12] = {
//    {31,28,31,30,31,30,31,31,30,31,30,31},
//    {31,29,31,30,31,30,31,31,30,31,30,31}
//    };

    char daytab[2][12] = {
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,29,31,30,31,30,31,31,30,31,30,31
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
    // in ra sai ket qua do thieu ""
}

void sectionb(){
    char daytab[2][12] = {
    {31,28,31,30,31,30,31,31,30,31,30,31},
    {31,29,31,30,31,30,31,31}
    };

//    char daytab[2][12] = {
//    31,28,31,30,31,30,31,31,30,31,30,31,
//
//    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
}

void sectionc(){
//    char daytab[2][12] = {
//    {31,28,31,30,31,30,31,31,30,31,30,31},
//    {31,29,31,30,31,30,31,31,30,31,30,31}
//    };

    char daytab[][12] = {
    31,28,31,30,31,30,31,31,30,31,30,31,
    31,29,31,30,31,30,31,31,30,31,30,31
    };

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 12; j++){
            cout << daytab[i][j] << " ";
        }
        cout << endl;
    }
    //xoa cot thi code khong con chay
    //xoa hang code van chay dung
}

int main(){
    sectionc();
    return 0;
}
