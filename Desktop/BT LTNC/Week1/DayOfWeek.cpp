#include<iostream>
using namespace std;

bool LeapYear(int n);
int dayinayear(int year);
int daytoyear(int year);
int dayinamonth(int month, int year);
int daytomonth(int month, int year);
int total(int day, int month, int year);

int main(){
    int day, month, year;
    cin >> day >> month >> year;
    int x = total(day, month, year) % 7;
    string s[] = {"Chu nhat", "Thu hai", "Thu ba", "Thu tu", "Thu nam", "Thu sau", "Thu bay"};
    cout << s[x];
}

bool LeapYear(int n){
    if((n % 4 == 0) && (n % 100 != 0)){
        return true;
    }else if(n % 400 == 0)
        return true;
    else return false;
}

int dayinayear(int year){
    if(LeapYear(year))
        return 366;
    else return 365;
}

int daytoyear(int year){
    int sumofdays = 0;
    for(int i = 1; i < year; i++){
        sumofdays += dayinayear(i);
    }
    return sumofdays;
}

int dayinamonth(int month, int year){
    switch(month){
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:{
            if(LeapYear(year))  return 29;
            else return 28;
        }
        default: return 31;
    }
}

int daytomonth(int month, int year){
    int sumofdays = 0;
    for(int i = 0; i < year; i++){
        sumofdays += dayinamonth(month, year);
    }
    return sumofdays;
}

int total(int day, int month, int year){
    return daytoyear(year) + daytomonth(month, year) + day;
}
