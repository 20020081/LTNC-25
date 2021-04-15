#include<iostream>
#include<cstring>
using namespace std;

char* Reverse(const char* a){
    int n = strlen(a);
    char* p = new char [n];

    for(int i = 0; i <= n - 1; i++)
        p[i] = a[n - i - 1];

    return p;
}

char* delete_char(const char* a, const char* c){
    int n = strlen(a), j = 0, check = 0;
    char* p = new char [n];

    for(int i = 0; i < n; i++){
        if(a[i] != c[0]){
            p[j] = a[i];
            j++;
        }
        else check++;
    }
    p[n-check] = '\0';

    return p;
}

char* pad_right(const char* a, int n){
    int N = strlen(a);
    char* p = new char [max(N, n)];

    for(int i = 0; i < n; i++){
        p[i] = a[i];
    }

    if(N < n){
        for(int i = N; i < n; i++){
            p[i] = '_';
        }
    }

    return p;
}

char* pad_left(const char* a, int n){
    int N = strlen(a);
    char* p = new char [max(N, n)];
    if(N < n){
        for(int i = 0; i < n - N; i++){
            p[i] = '_';
        }
        int j = 0;
        for(int i = n - N; i < n; i++){
            p[i] = a[j];
            j++;
        }
    }
    else{
        for(int i = 0; i < N; i++)
            p[i] = a[i];
    }

    return p;
}

char* truncate(const char* a, int n){
    int N = strlen(a);
    char* p = new char [min(N, n)];
    for(int i = 0; i < min(N, n); i++){
        p[i] = a[i];
    }

    return p;
}

bool is_palindrome(char a[]){
    int n = strlen(a);
    for(int i = 0; i < n/2; i++){
        if(a[i] != a[n-i-1])
            return 1;
    }
    return 0;
}

char* trim_left(const char* a){
    int n = strlen(a);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] != ' '){
            j = i;
            break;
        }
    }

    char* p = new char [n - j - 1];
    for(int i = j; i < n; i++){
        p[i - j] = a[i];
    }

    return p;
}

char* trim_right(const char* a){
    int n = strlen(a);
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == ' '){
            j = i - 1;
            break;
        }
    }

    char* p = new char [j];
    for(int i = 0; i <= j; i++){
        p[i] = a[i];
    }

    return p;
}

int main(){
    char s[] = "ahihidongok";
    char ss[] = "    hihi";
    char sss[] = "hihi    ";

//    cout << Reverse(s) << endl;
//    cout << delete_char(s, "i");
//    cout << pad_right(s, 15);
//    cout <<pad_left(s, 15);
//    cout << truncate(s, 6);
//    if(is_palindrome(s) == 1)
//        cout << "false";
//    else cout << "true";
//    cout << trim_left(ss);
    cout << trim_right(sss);

}
