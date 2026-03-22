#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    int tu, mau;
};

int main() {
    PhanSo p1, p2;
    cout << "Nhap PS 1 (tu mau): "; cin >> p1.tu >> p1.mau;
    cout << "Nhap PS 2 (tu mau): "; cin >> p2.tu >> p2.mau;

    // Kiem tra mau so bang 0 truoc khi tinh toan
    if (p1.mau == 0 || p2.mau == 0) {
        cout << "Loi: Mau so phai khac 0!" << endl;
        return 0;
    }

    // Tong: (a*d + c*b) / (b*d)
    cout << "Tong: " << (p1.tu * p2.mau + p2.tu * p1.mau) << "/" << (p1.mau * p2.mau) << endl;

    // Hieu: (a*d - c*b) / (b*d)
    cout << "Hieu: " << (p1.tu * p2.mau - p2.tu * p1.mau) << "/" << (p1.mau * p2.mau) << endl;

    // Tich: (a*c) / (b*d)
    cout << "Tich: " << (p1.tu * p2.tu) << "/" << (p1.mau * p2.mau) << endl;

    // Thuong: (a*d) / (b*c)
    if (p2.tu == 0) {
        cout << "Thuong: Khong the chia cho 0" << endl;
    } else {
        cout << "Thuong: " << (p1.tu * p2.mau) << "/" << (p1.mau * p2.tu) << endl;
    }

    return 0;
}
