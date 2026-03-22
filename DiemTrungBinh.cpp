#include <bits/stdc++.h>
using namespace std;

struct HocSinh {
    string hoTen;
    float toan, van, dtb;
};

int main() {
    HocSinh hs;
    cout << "Nhap ho ten: ";
    getline(cin, hs.hoTen);
    cout << "Nhap diem Toan: "; cin >> hs.toan;
    cout << "Nhap diem Van: "; cin >> hs.van;

    hs.dtb = (hs.toan + hs.van) / 2;

    cout << "--- Ket qua ---" << endl;
    cout << "Hoc sinh: " << hs.hoTen << endl;
    cout << "Diem trung binh: " << hs.dtb << endl;

    return 0;
}
