#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

void Sapxepdiem(double *diem, string *ten, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (diem[j] < diem[j + 1]) {
                swap(diem[j], diem[j + 1]);
                swap(ten[j], ten[j + 1]); 
            }
        }
    }
}

void NhapDiemVaTen(string *ten, double *diem, int size) {
    for (int i = 0; i < size; ++i) {
        cout << "Nhap ten hoc sinh thu " << i + 1 << ": ";
        cin >> ten[i];
        do {
            cout << "Nhap diem kiem tra cho " << ten[i] << ": ";
            cin >> diem[i];
            if (diem[i] < 0) {
                cout << "Diem khong duoc la so am. Vui long nhap lai." << endl;
            }
        } while (diem[i] < 0);
    }
}
double DiemTrungBinh(double *diem, int size) {
    double S = 0;
    for (int i = 0; i < size; i++) {
        S += diem[i];
    }
    return S / size;}

int main() {
    int Soluonghocsinh;
    cout << "Nhap so luong hoc sinh: "; 
    cin >> Soluonghocsinh;

    if (Soluonghocsinh <= 0) {
        cout << "So luong hoc sinh phai lon hon 0" << endl;
        return 1;
    }
    
    string *ten = new string[Soluonghocsinh];
    double *diem = new double[Soluonghocsinh];

    NhapDiemVaTen(ten, diem, Soluonghocsinh);
    
    Sapxepdiem(diem, ten, Soluonghocsinh);
    
    cout << "\nDanh sach diem da sap xep: \n";
    for (int i = 0; i < Soluonghocsinh; ++i) {
        cout << ten[i] << ": " << diem[i] << endl;
    }
    double a= DiemTrungBinh(diem, Soluonghocsinh);
    cout << "\nDiem trung binh: " << a << endl;

    delete[] ten; 
    delete[] diem; 
    return 0;
}

