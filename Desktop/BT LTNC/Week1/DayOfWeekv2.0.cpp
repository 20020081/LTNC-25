#include<iostream>
using namespace std;

int main(){
    int day, month, year;
    cin >> day >> month >> year;

    if(month < 3){
        month += 12;
        year += 1;
    }
    int n = (day + 2*month + (3*(month + 1)) / 5 + year + (year / 4)) % 7;
    string s[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thusday", "Friday", "Saturday"};
    cout << s[n];
}
