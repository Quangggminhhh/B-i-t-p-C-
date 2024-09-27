#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Cauhinh {
    string Tencauhinh;
    int Hieusuat;
    double Giacauhinh;
};

void Danhsach(Cauhinh a[], int dem) {
    cout << "\nDanh sach cau hinh may tinh:\n";
    for (int i = 0; i < dem; i++) {
        cout << i + 1 << " Ten cau hinh: " << a[i].Tencauhinh << endl;
        cout << "Diem hieu suat: " << a[i].Hieusuat << endl;
        cout << "Gia: " << a[i].Giacauhinh << " VND" << endl; 
    }
}

void Danhsachmoi(Cauhinh a[], int *dem) {
    if (*dem >= 100) {
        cout << "Da dat gioi han cau hinh.\n";
        return;
    }

    Cauhinh b;
    cout << "Nhap ten cau hinh: ";
    cin >> b.Tencauhinh;

    cout << "Nhap diem hieu suat (0 hoac duong): ";
    while (1) {
        cin >> b.Hieusuat;
        if (b.Hieusuat >= 0) break;
        cout << "Diem hieu suat khong duoc am. Nhap lai: ";
    }

    cout << "Nhap gia (0 hoac duong): ";
    while (1) {
        cin >> b.Giacauhinh;
        if (b.Giacauhinh >= 0) break;
        cout << "Gia khong duoc am. Nhap lai: ";
    }

    a[*dem] = b;
    (*dem)++;
    cout << "Cau hinh moi da duoc them.\n";
}

void Thaydoigia(Cauhinh a[], int dem) {
    int thutu;
    Danhsach(a, dem);
    cout << "Nhap so thu tu cua cau hinh can thay doi gia (1 den " << dem << "): ";
    cin >> thutu;

    if (thutu < 1 || thutu > dem) {
        cout << "So thu tu khong hop le.\n";
        return;
    }

    double Giamoi;
    cout << "Nhap gia moi (0 hoac duong): ";
    while (1) {
        cin >> Giamoi;
        if (Giamoi >= 0) break;
        cout << "Gia khong duoc am. Nhap lai: ";
    }

    a[thutu - 1].Giacauhinh = Giamoi;
    cout << "Gia cau hinh da duoc cap nhat.\n";
}

void Timkiemcauhinh(Cauhinh a[], int dem) {
    int Hieusuattoithieu;
    double Giatoida;

    cout << "Nhap diem hieu suat toi thieu: ";
    cin >> Hieusuattoithieu;
    cout << "Nhap gia toi da: ";
    cin >> Giatoida;

    cout << "\nCac cau hinh phu hop:\n";
    int found = 0;
    for (int i = 0; i < dem; i++) {
        if (a[i].Hieusuat >= Hieusuattoithieu && a[i].Giacauhinh <= Giatoida) {
            cout << i + 1 << " Ten cau hinh: " << a[i].Tencauhinh << endl;
            cout << "Diem hieu suat: " << a[i].Hieusuat << endl;
            cout << "Gia: " << a[i].Giacauhinh << " VND" << endl; 
            found = 1;
        }
    }

    if (!found) {
        cout << "Khong co cau hinh nao khop voi yeu cau.\n";
    }
}

int main() {
    Cauhinh a[100];
    int dem = 0;
    int chon;

    while (1) {
        cout << "\nChuong trinh quan ly cau hinh may tinh:\n";
        cout << "1. Them cau hinh moi\n";
        cout << "2. Thay doi gia cau hinh hien co\n";
        cout << "3. Hien thi toan bo du lieu cau hinh\n";
        cout << "4. Tim kiem cau hinh may tinh\n";
        cout << "5. Thoat\n";
        cout << "Chon mot tuy chon (1-5): ";
        cin >> chon;

        switch (chon) {
            case 1:
                Danhsachmoi(a, &dem);
                break;
            case 2:
                if (dem == 0) {
                    cout << "Khong co cau hinh nao de thay doi.\n";
                } else {
                    Thaydoigia(a, dem);
                }
                break;
            case 3:
                if (dem == 0) {
                    cout << "Khong co cau hinh nao de hien thi.\n";
                } else {
                    Danhsach(a, dem);
                }
                break;
            case 4:
                if (dem == 0) {
                    cout << "Khong co cau hinh nao de tim kiem.\n";
                } else {
                    Timkiemcauhinh(a, dem);
                }
                break;
            case 5:
                cout << "Thoat chuong trinh.\n";
                return 0;
            default:
                cout << "Tuy chon khong hop le. Nhap lai:\n";
                break;
        }
    }

    return 0;
}

