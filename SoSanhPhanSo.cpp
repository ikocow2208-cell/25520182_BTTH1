#include <bits/stdc++.h>
using namespace std;

struct PhanSo {
    int tu, mau;
};

int main() {
    PhanSo ps1, ps2;
    cout << "Nhap phan so 1 (tu mau): "; cin >> ps1.tu >> ps1.mau;
    cout << "Nhap phan so 2 (tu mau): "; cin >> ps2.tu >> ps2.mau;

    // Kiem tra mau so bang 0 de tranh loi chuong trinh
    if (ps1.mau == 0 || ps2.mau == 0) {
        cout << "Mau so phai khac 0!" << endl;
        return 0;
    }

    // So sanh bang cach quy dong (a/b va c/d -> so sanh a*d va c*b)
    // Hoac dung cach ep kieu double nhu trong anh cua ni
    double giatri1 = (double)ps1.tu / ps1.mau;
    double giatri2 = (double)ps2.tu / ps2.mau;

    cout << "Phan so lon nhat la: ";
    if (giatri1 >= giatri2)
        cout << ps1.tu << "/" << ps1.mau << endl;
    else
        cout << ps2.tu << "/" << ps2.mau << endl;

    return 0;
}
