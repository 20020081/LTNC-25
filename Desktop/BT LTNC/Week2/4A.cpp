#include<iostream>
using namespace std;

void resultout(int d, int m, int y);
bool Leapyear(int y);
int daysinyear(int y);
int daysinmonth(int m, int y);
int dayafterinyear(int d, int m, int y, int k);
int check(int d, int m, int y, int k);
int daystomonth(int m, int y);
void solve1(int d, int m, int y, int k);
void solve2(int d, int m, int y, int k);
void solve3(int d, int m, int y, int k);

int main(){
    int d, m, y, k;
    char c;
    cin >> d >> c >> m >> c >> y;
    while(cin >> k){
        if(k == 0) break;

        if(check(d, m, y, k) == 1){
            solve1(d, m, y, k);
        }
        else if(check(d, m, y, k) == 2){
            solve2(d, m, y, k);
        }
        else if(check(d, m, y, k) == 3){
            solve3(d, m, y, k);
        }
    }

    return 0;
}

void resultout(int d, int m, int y){
    if(d < 10) cout << 0 << d;
    else cout << d;
    cout << "-";
    if(m < 10) cout << 0 << m;
    else cout << m;
    cout << "-";
    cout << y << endl;
}

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

int dayafterinyear(int d, int m, int y, int k){
    int tongsongay = 0;
    for(int i = 1; i < m; i++){
        tongsongay += daysinmonth(i, y);
    }
    tongsongay += d;
    return tongsongay + k;
} 

int check(int d, int m, int y, int k){
    if(d + k >= 1 && d + k <= daysinmonth(m, y))
        return 1;
    else if(((d + k <= 0) || (d + k > daysinmonth(m, y))) && dayafterinyear(d, m, y, k) + k > 0 && dayafterinyear(d, m, y, k) + k < daysinyear(y))
        return 2;
    else return 3;
}

int daystomonth(int m, int y){
    int days = 0;
    for(int i = 1; i <= m; i++){
        days += daysinmonth(i, y);
    }
    return days;
}

void solve1(int d, int m, int y, int k){
    d += k;
    resultout(d, m, y);
}

void solve2(int d, int m, int y, int k){
    int after = dayafterinyear(d, m, y, k);
    for(int i = 1; i <= 11; i++){
        if(after <= 31){
            m = 1;
            break;
        }
        else{
            if(after > daystomonth(i, y) && after <= daystomonth(i+1, y)){
                m = i+1;
                break;
            }
        }
    }
    if(m == 1){
        d = after;
    }
    else{
        int t = 0;
        for(int i = 1; i < m; i++){
            t += daysinmonth(i, y);
        }
        d = after - t;
    }
    resultout(d, m, y);
}

void solve3(int d, int m, int y, int k){
    int after = dayafterinyear(d, m, y, k);
    if(after > 0){
        // tinh nam
        while(after >= daysinyear(y)){
            if(Leapyear(y))
                after -= 366;
            else after -= 365;
            y++;
        }
        // tinh thang
        for(int i = 1; i <= 11; i++){
            if(after <= 31){
                m = 1;
                break;
            }
            else{
                if(after > daystomonth(i, y) && after <= daystomonth(i+1, y)){
                    m = i+1;
                    break;
                }
            }
        }
        // tinh ngay
        if(m == 1){
            d = after;
        }
        else{
            int t = 0;
            for(int i = 1; i < m; i++){
                t += daysinmonth(i, y);
            }
            d = after - t;

        }
    }
    else{ // lui nam
        // after < 0
        y--;
        after *= -1;
        while(after >= daysinyear(y)){
            if(Leapyear(y)) after -= 366;
            else after-= 365;
            y--;
        }
        after = daysinyear(y) - after;
        // tinh thang
        for(int i = 1; i <= 11; i++){
            if(after <= 31){
                m = 1;
                break;
            }
            else{
                if(after > daystomonth(i, y) && after <= daystomonth(i+1, y)){
                    m = i+1;
                    break;
                }
            }
        }
        // tinh ngay
        if(m == 1){
            d = after;
        }
        else{
            int t = 0;
            for(int i = 1; i < m; i++){
                t += daysinmonth(i, y);
            }
            d = after - t;

        }
    }
    resultout(d, m, y);
}

