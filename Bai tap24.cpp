#include <iostream>
#include <string>

using namespace std;

struct  Thongtin{
    string Ten;
    string Monhoc;
    float Chiphi;
};

const int Thongtingiangvien = 12;



void Themgiangvien (Thongtin a[], int &dem) {
    if (dem >= Thongtingiangvien) {
        cout << "Ða dat gioi han so giang vien!" << endl;
        return;
    }

    Thongtin b;

    cout << "Nhap ten giang vien: ";
    cin.ignore();
    getline(cin, b.Ten);
    cout << "Nhap mon day : ";
    getline(cin, b.Monhoc);
    
    do {
        cout << "Nhap chi phi giang vien (>= 0): ";
        cin >> b.Chiphi;
        if (b.Chiphi < 0) {
            cout << "Phi giang vien khong duoc la am. Nhap lai: " << endl;
        }
    } while (b.Chiphi < 0);

    a[dem] = b;
    dem++;
    cout << "Da them thong tin giang vien thanh cong!" << endl;
}

void Thaydoigiangvien(Thongtin a[], int dem) {
    int Thutu;
    cout << "Nhap so giang vien de thay doi (0 den " << dem - 1 << "): ";
    cin >> Thutu;

    if (Thutu< 0 || Thutu >= dem) {
        cout << "Khong hop le!" << endl;
        return;
    }

    cout << "Nhap ten giang vien moi ";
    cin.ignore();
    getline(cin, a[Thutu].Ten);
    cout << "Nhap mon day: ";
    getline(cin, a[Thutu].Monhoc);

    do {
        cout << "Nhap phi phai tra moi (>= 0): ";
        cin >> a[Thutu].Chiphi;
        if (a[Thutu].Chiphi < 0) {
            cout << "Phi tra giang vien khong duoc la am. Nhap lai: " << endl;
        }
    } while (a[Thutu].Chiphi < 0);

    cout << "Cap nhat thanh cong!" << endl;
}

void Danhsachgiangvien(Thongtin a[], int dem) {
    if (dem == 0) {
        cout << "Chua co giang vien nao duoc luu tru." << endl;
        return;
    }

    cout << "----- Danh sach giang vien -----" << endl;
    for (int i = 0; i < dem; i++) {
        cout << "Giang vien " << i << ":" << endl;
        cout << "Ten: " << a[i].Ten << endl;
        cout << "Mon day: " << a[i].Monhoc << endl;
        cout << "Phi: " << a[i].Chiphi << endl;
        cout << "-----------------------------" << endl;
    }
}

int main() {
    Thongtin a[Thongtingiangvien];
    int c = 0;
    int chon;
    while (1){
    cout << "----- Chon thong tin -----" << endl;
    cout << "1. Nhap thong tin giang vien" << endl;
    cout << "2. Thay doi thong tin giang vien" << endl;
    cout << "3. Hien thi tat ca giang vien" << endl;
    cout << "4. Thoat" << endl;
    cout << "Chon mot nguoi tuy chon: ";
    cin>>chon;


        switch (chon) {
            case 1:
                Themgiangvien(a, c);
                break;
            case 2:
                Thaydoigiangvien(a, c);
                break;
            case 3:
                Danhsachgiangvien(a, c);
                break;
            case 4:
                cout << "Thoat." << endl;
               return 0;
            default:
                cout << "Khong hop le. Nhap lai: " << endl;
        }
    } while (chon != 4);

    return 0;
}

