#include <bits/stdc++.h>
using namespace std;

struct Ngay {
    int d, m, y;
};

bool laNamNhuan(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

int main() {
    Ngay n;
    cout << "Nhap ngay thang nam: "; cin >> n.d >> n.m >> n.y;

    int soNgay;
    if (n.m == 4 || n.m == 6 || n.m == 9 || n.m == 11) 
        soNgay = 30;
    else if (n.m == 2) 
        soNgay = laNamNhuan(n.y) ? 29 : 28;
    else 
        soNgay = 31;

    n.d++;
    if (n.d > soNgay) {
        n.d = 1;
        n.m++;
        if (n.m > 12) {
            n.m = 1;
            n.y++;
        }
    }

    cout << "Ngay tiep theo: " << n.d << "/" << n.m << "/" << n.y << endl;

    return 0;
}
