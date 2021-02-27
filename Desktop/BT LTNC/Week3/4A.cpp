#include<iostream>
using namespace std;

void sectiona(){
    char f[5] = {1, 3, 2, 4, 5};
    cout << f[-1] << endl
         << f[4] << endl
         << f[5] << endl;
    //khi doc tran thi khong bi loi nhung khong in ra gia tri
}

void sectionb(){

}

int main(){
    sectiona();
    return 0;
}
