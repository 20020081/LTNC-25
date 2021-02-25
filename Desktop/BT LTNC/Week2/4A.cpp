#include<iostream>
using namespace std;

void print_result(int d, int m, int y);
bool check_LeapYear(int y);
int cal_days_in_year(int y);
int cal_days_in_month(int m, int y);
int convert_Dates_to_day_inYear(int d, int m, int y, int k);
int check_to_solve(int d, int m, int y, int k);
int sum_day_to_month(int m, int y);
void solve1(int d, int m, int y, int k);
void solve2(int d, int m, int y, int k);
void solve3(int d, int m, int y, int k);

int main(){
    int d, m, y, k;
    char c;
    cin >> d >> c >> m >> c >> y;
    int D = d, M = m, Y = y;

    while(cin >> k){
        if(k == 0) break;

        if(check_to_solve(d, m, y, k) == 1){
            solve1(d, m, y, k);
        }
        else if(check_to_solve(d, m, y, k) == 2){
            solve2(d, m, y, k);
        }
        else if(check_to_solve(d, m, y, k) == 3){
            solve3(d, m, y, k);
        }
    }

    return 0;
}

void print_result(int d, int m, int y){
    if(d < 10) cout << 0 << d;
    else cout << d;
    cout << "-";

    if(m < 10) cout << 0 << m;
    else cout << m;
    cout << "-";

    cout << y << endl;
}

bool check_LeapYear(int y){
    if(y % 4 == 0 && y % 100 != 0)
        return true;
    else if(y % 400 == 0)
        return true;
    return false;
}

int cal_days_in_year(int y){
    if(check_LeapYear(y))
        return 366;
    return 365;
}

int cal_days_in_month(int m, int y){
    switch(m){
        case 2:{
            if(check_LeapYear(y))
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

int convert_Dates_to_day_inYear(int d, int m, int y, int k){
    int total_days = 0;
    for(int i = 1; i < m; i++){
        total_days += cal_days_in_month(i, y);
    }
    total_days += d;
    return total_days + k;
}

int check_to_solve(int d, int m, int y, int k){
    if(d + k >= 1 && d + k <= cal_days_in_month(m, y))
        return 1;

    else if(((d + k <= 0) || (d + k > cal_days_in_month(m, y))) && convert_Dates_to_day_inYear(d, m, y, k) + k > 0 && convert_Dates_to_day_inYear(d, m, y, k) + k < cal_days_in_year(y))
        return 2;

    else return 3;
}

int sum_day_to_month(int m, int y){
    int days = 0;
    for(int i = 1; i <= m; i++){
        days += cal_days_in_month(i, y);
    }
    return days;
}

void solve1(int d, int m, int y, int k){
    d += k;
    print_result(d, m, y);
}

void solve2(int d, int m, int y, int k){
    int total_days_inYear = convert_Dates_to_day_inYear(d, m, y, k);

    for(int i = 1; i <= 11; i++){
        if(total_days_inYear <= 31){
            m = 1;
            break;
        }
        else{
            if(total_days_inYear > sum_day_to_month(i, y) && total_days_inYear <= sum_day_to_month(i+1, y)){
                m = i+1;
                break;
            }
        }
    }
    if(m == 1){
        d = total_days_inYear;
    }
    else{
        int t = 0;

        for(int i = 1; i < m; i++){
            t += cal_days_in_month(i, y);
        }
        d = total_days_inYear - t;
    }

    print_result(d, m, y);
}
void solve3(int d, int m, int y, int k){
    int total_days_inYear = convert_Dates_to_day_inYear(d, m, y, k);

    if(total_days_inYear > 0){
        // tinh nam
        while(total_days_inYear >= cal_days_in_year(y)){
            if(check_LeapYear(y))
                total_days_inYear -= 366;
            else total_days_inYear -= 365;
            y++;
        }
        // tinh thang
        for(int i = 1; i <= 11; i++){
            if(total_days_inYear <= 31){
                m = 1;
                break;
            }
            else{
                if(total_days_inYear > sum_day_to_month(i, y) && total_days_inYear <= sum_day_to_month(i+1, y)){
                    m = i+1;
                    break;
                }
            }
        }
        // tinh ngay
        if(m == 1){
            d = total_days_inYear;
        }
        else{
            int t = 0;
            for(int i = 1; i < m; i++){
                t += cal_days_in_month(i, y);
            }
            d = total_days_inYear - t;

        }
    }
    else{ // lui nam
        // total_days_inYear < 0
        y--;
        total_days_inYear *= -1;
        while(total_days_inYear >= cal_days_in_year(y)){
            if(check_LeapYear(y)) total_days_inYear -= 366;
            else total_days_inYear-= 365;
            y--;
        }
        total_days_inYear = cal_days_in_year(y) - total_days_inYear;
        // tinh thang
        for(int i = 1; i <= 11; i++){
            if(total_days_inYear <= 31){
                m = 1;
                break;
            }
            else{
                if(total_days_inYear > sum_day_to_month(i, y) && total_days_inYear <= sum_day_to_month(i+1, y)){
                    m = i+1;
                    break;
                }
            }
        }
        // tinh ngay
        if(m == 1){
            d = total_days_inYear;
        }
        else{
            int t = 0;

            for(int i = 1; i < m; i++){
                t += cal_days_in_month(i, y);
            }
            d = total_days_inYear - t;

        }
    }

    print_result(d, m, y);
}

