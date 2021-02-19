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
void solve1(int &d, int k){
    d += k;
}
void solve2(int &d, int &m, int &y, int k){
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
    }else{
        int t = 0;
        for(int i = 1; i < m; i++){
            t += daysinmonth(i, y);
        }
        d = after - t;
    }
}
void solve3(int &d, int &m, int &y, int k){
    int after = dayafterinyear(d, m, y, k);
    if(after > 0){
        // chia ngày đến hết năm hiện tại
        if(Leapyear(y))
            after -= 366;
        else after -= 365;
        // chia ngày cho các năm sau
        while(after >= 365){
            y++;
            if(Leapyear(y))
                after -= 366;
            else after -= 365;
        }
        m = after/30 + 1;
        int t = 0;
        for(int i = 1; i < m; i++){
            t += daysinmonth(i, y);
        }
        d = after - t;
    }
    else{ // lui nam

    }
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
int main(){
    int d, m, y, k;
    char c;
    cin >> d >> c >> m >> c >> y;

    while(cin >> k){
        if(k == 0) break;

        if(check(d, m, y, k) == 1){
            solve1(d, k);
        }
        else if(check(d, m, y, k) == 2){
            solve2(d, m, y, k);
        }
        else if(check(d, m, y, k) == 3){
            solve3(d, m, y, k);
        }
        resultout(d, m, y);
    }

    return 0;
}
