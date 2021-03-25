#include<iostream>

using namespace std;

int N, K;
string s;
int status[50] = {0};

void recursion(int j){
    if(j == K){
        cout << s << endl;
        return;
    }

    for(int i = 1; i <= N; i++){
        if(status[i] == 0){
            s = s + char('a' + i - 1);
            status[i] = 1;

            recursion(j+1);

            s.erase(j, 1);
            status[i] = 0;
        }
    }
}
int main(){
    cin >> N >> K;
    if(N >= K){
        recursion(0);
    }
    else
        cout << "Error! leuleu";
}
