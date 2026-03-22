#include <bits/stdc++.h>
using namespace std;

// Dinh nghia cau truc Phan so
struct PhanSo {
    int tu, mau;
};

// Ham tim Uoc Chung Lon Nhat (UCLN)
int timUCLN(int a, int b) {
    a = abs(a);
    b = abs(b);
    while (a * b != 0) {
        if (a > b) a %= b;
        else b %= a;
    }
    return a + b;
}

int main() {
    PhanSo ps;
    cout << "Nhap tu so: "; cin >> ps.tu;
    cout << "Nhap mau so: "; cin >> ps.mau;

    if (ps.mau == 0) {
        cout << "Mau so phai khac 0!";
    } else {
        int u = timUCLN(ps.tu, ps.mau);
        ps.tu /= u;
        ps.mau /= u;
        
        // Xu ly hien thi dep hon neu mau am
        if (ps.mau < 0) {
            ps.tu = -ps.tu;
            ps.mau = -ps.mau;
        }
        
        cout << "Phan so sau khi rut gon: " << ps.tu << "/" << ps.mau << endl;
    }

    return 0;
}
