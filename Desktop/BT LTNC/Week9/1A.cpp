#include<iostream>
#include<cstring>
using namespace std;
//
//● trong hàm concat, bạn có thể dùng hàm trong thư viện <cstring>, chẳng hạn strcpy() hay
//strncpy() để sao chép xâu, strcat hay strncat để nối xâu. Xem chi tiết và ví dụ tại
//http://www.cplusplus.com/reference/cstring/.
//● Ý tưởng thuật toán: (1) tính ra kích thước của xâu kết quả, (2) cấp phát động mảng kết
//quả với kích thước vừa tính, (3) chép xâu thứ nhất vào đầu mảng động, (4) chép/nối
char* concat(const char* s1, const char* s2){
    int nf = strlen(s1), ns = strlen(s2);
//    cout << s1 << endl;
    cout << nf << " " << ns;

    int n = nf + ns, i = 0;
    char* str = new char [n];

    strcat(str, s1);
    strcat(str, s2);

    return str;
}

int main(){
     char c1 = 'Hello';
     char c2 = 'Word';
//    cout << &c1 << ' ' << &c2 << endl;
    concat(&c1, &c2);

    return 0;
}
