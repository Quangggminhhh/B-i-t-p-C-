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

void Thoigian1(Thoigian &dt) {
    cout << "Nhap nam: ";
    cin >> dt.Nam;
    cout << "Nhap thang (1-12): ";
    cin >> dt.Thang;
    cout << "Nhap ngay (1-31): ";
    cin >> dt.Ngay;
    cout << "Nhap gio (0-23): ";
    cin >> dt.Gio;
    cout << "Nhap phut (0-59): ";
    cin >> dt.Phut;
    cout << "Nhap giay (0-59): ";
    cin >> dt.Giay;
}


int Sosanh(const Thoigian &dt1, const Thoigian &dt2) {
    if (dt1.Nam != dt2.Nam) {
        return dt1.Nam - dt2.Nam;
    }
    if (dt1.Thang != dt2.Thang) {
        return dt1.Thang - dt2.Thang;
    }
    if (dt1.Ngay != dt2.Ngay) {
        return dt1.Ngay - dt2.Ngay;
    }
    if (dt1.Gio != dt2.Gio) {
        return dt1.Gio - dt2.Gio;
    }
    if (dt1.Phut != dt2.Phut) {
        return dt1.Phut - dt2.Phut;
    }
    return dt1.Giay - dt2.Giay;
}

int main() {
    Thoigian dt1, dt2;

    cout << "Nhap thong tin cho ngay gio thu 1:\n";
   Thoigian1(dt1);
    
    cout << "Nhap thong tin cho ngay gio thu 2:\n";
    Thoigian1(dt2);

    int a = Sosanh(dt1, dt2);
    
    if (a < 0) {
        cout << "Ngay gio thu nhat truoc ngay gio thu hai.\n";
    } else if (a > 0) {
        cout << "Ngay gio thu nhat sau ngay gio thu hai.\n";
    } else {
        cout << "Hai ngay gio bang nhau.\n";
    }

    return 0;
}

