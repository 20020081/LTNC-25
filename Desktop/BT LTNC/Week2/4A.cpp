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
    int tongsongay = 0;
    for(int i = 1; i < m; i++){
        tongsongay += daysinmonth(i, y);
    }
    tongsongay += d;
    return tongsongay;
}
int check(int d, int m, int y, int k){
    if(d + k >= 1 && d + k < daysinmonth(m))
        return 1;
    else if(tongngay + k > 0 && tongngay + k < daysinyear(y))
        return 2;
    else return 3;
}
void solve1(int &d, int k){
    d += k;
}
void solve2(int &d, int &m, int &y, int k){
    int after = tongngay(d, m, y) + k;
    int t = 0;
    for(int i = 1; i <= after/30; i++){
        t += daysinmonth(i); 
    }
    d = after - t;
    m = after/30 + 1;
}
void solve3(int &d, int &m, int &y, int k){
    int after = tongngay(d, m, y) + k;
    if(after > 0){
        do{
            if(Leapyear(y))
                after -= 366;
            else after -= 365;
        }
        while(after >= 365){
            y++;
            if(Leapyear(y))
                after -= 366;
            else after -= 365;
        }
        m = after/30 + 1;
        int t = 0;
        for(int i = 1; i < m; i++){
            t += daysinmonth(i, y)
        }
        d = after - t;
    }
    else{ // lui nam
        
    }
}
int main(){
    int d, m, y;
    cin >> d >> m >> y;
    m *= -1; y *= -1;
    int k; cin >> k;

    while(k != 0){
        if(check(d, m, y, k) == 1){
            solve1(d, k);
        }
        else if(check(d, m, y, k) == 2){
            solve2(d, m, y, k);
        }
        else if(check(d, m, y, k) == 3){
            solve3(d, m, y, k);
        }
            cout << d << "-" << m << "-" << y << endl;
    }

    return 0;
}
