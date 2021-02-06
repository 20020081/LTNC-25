#include<iostream>
using namespace std;

bool Leapyear(int y){
    if(y % 4 == 0 && y % 100 != 0)
        return true;
    else if(y % 400 == 0)
        return true;
    return false;
}

int daysinyear(int y){
    if(Leapyear(y))
        return 366;
    return 365;
}

int daysinmonth(int m, int y){
    switch(m){
        case 2:{
            if(Leapyear(y))
                return 29;
            return 28;
        }
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        default:
            return 31;
    }
}

int tongngay(int d, int m, int y){

}
int check(int d, int m, int y, int k){
    if(d + k >= 1 && d + k <= daysinmonth(m))
        return 1;
    else if(d + k <= 0)
}

int main(){
    int d, m, y;
    cin >> d >> m >> y;
    m *= -1; y *= -1;
    int k; cin >> k;

    while(k != 0){
        if(check(d, m, y) == 1){
            sumdayinmonth(d, k);
            cout << d << "-" << m << "-" << y;
        }
        else if(check(d, m, y) == 2){
            sumdayoutmonth(d, m, k);
            cout << d << "-" << m << "-" << y;
        }
        else if()
    }

    return 0;
}
