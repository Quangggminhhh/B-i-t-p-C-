#include <iostream>
using namespace std;

struct Thoigian {
    int Nam;
    int Thang;
    int Ngay;
    int Gio;
    int Phut;
    int Giay;
};
void NhapThoigian(Thoigian &dt) {
    do {
        cout << "Nhap nam: ";
        cin >> dt.Nam;
    } while (dt.Nam < 0);

    do {
        cout << "Nhap thang (1-12): ";
        cin >> dt.Thang;
    } while (dt.Thang < 1 || dt.Thang > 12);

    do {
        cout << "Nhap ngay (1-31): ";
        cin >> dt.Ngay;
    } while (dt.Ngay < 1 || dt.Ngay > 31);

    do {
        cout << "Nhap gio (0-23): ";
        cin >> dt.Gio;
    } while (dt.Gio < 0 || dt.Gio > 23);

    do {
        cout << "Nhap phut (0-59): ";
        cin >> dt.Phut;
    } while (dt.Phut < 0 || dt.Phut > 59);

    do {
        cout << "Nhap giay (0-59): ";
        cin >> dt.Giay;
    } while (dt.Giay < 0 || dt.Giay > 59);
}
Thoigian Sosanh(const Thoigian &dt1, const Thoigian &dt2) {
    if (dt1.Nam != dt2.Nam) {
        return (dt1.Nam < dt2.Nam) ? dt1 : dt2;
    }
    if (dt1.Thang != dt2.Thang) {
        return (dt1.Thang < dt2.Thang) ? dt1 : dt2;
    }
    if (dt1.Ngay != dt2.Ngay) {
        return (dt1.Ngay < dt2.Ngay) ? dt1 : dt2;
    }
    if (dt1.Gio != dt2.Gio) {
        return (dt1.Gio < dt2.Gio) ? dt1 : dt2;
    }
    if (dt1.Phut != dt2.Phut) {
        return (dt1.Phut < dt2.Phut) ? dt1 : dt2;
    }
    if (dt1.Giay != dt2.Giay) {
        return (dt1.Giay < dt2.Giay) ? dt1 : dt2;
    }

    cout << "Hai thoi diem giong nhau." << endl;
    return dt1; 
}
int main() {
    Thoigian dt1, dt2;

    cout << "Nhap thong tin cho ngay gio thu 1:\n";
    NhapThoigian(dt1);
    
    cout << "Nhap thong tin cho ngay gio thu 2:\n";
    NhapThoigian(dt2);

    Thoigian earlier = Sosanh(dt1, dt2);
    
    cout << "Thoi diem som hon la: " 
         << earlier.Nam << "-" 
         << earlier.Thang << "-" 
         << earlier.Ngay << " "
         << earlier.Gio << ":" 
         << earlier.Phut << ":" 
         << earlier.Giay << endl;

    return 0;
}

