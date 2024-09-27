#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct MayTinh {
    string ten;
    int diemHieuNang;
    int gia;
};

void themMayTinh(vector<MayTinh>& danhSachMayTinh) {
    MayTinh mayMoi;
    cout << "Nhap ten may tinh: ";
    cin >> mayMoi.ten;
    do {
        cout << "Nhap diem hieu nang (so nguyen duong): ";
        cin >> mayMoi.diemHieuNang;
    } while (mayMoi.diemHieuNang < 0);
    do {
        cout << "Nhap gia (so nguyen duong): ";
        cin >> mayMoi.gia;
    } while (mayMoi.gia < 0);
    danhSachMayTinh.push_back(mayMoi);
    cout << "Da them may tinh thanh cong!" << endl;
}

void thayDoiGia(vector<MayTinh>& danhSachMayTinh) {
    int soThuTu;
    cout << "Nhap so thu tu cua may tinh can thay doi gia: ";
    cin >> soThuTu;
    if (soThuTu >= 0 && soThuTu < danhSachMayTinh.size()) {
        int giaMoi;
        do {
            cout << "Nhap gia moi (so nguyen duong): ";
            cin >> giaMoi;
        } while (giaMoi < 0);
        danhSachMayTinh[soThuTu].gia = giaMoi;
        cout << "Da thay doi gia thanh cong!" << endl;
    } else {
        cout << "So thu tu khong hop le!" << endl;
    }
}

void hienThiDanhSach(const vector<MayTinh>& danhSachMayTinh) {
    cout << "Danh sach may tinh:" << endl;
    cout  << "Ten" ;
	cout  << "Diem Hieu Nang" ;
	cout << "Gia" << endl;
    for (size_t i = 0; i < danhSachMayTinh.size(); ++i) {
        cout << left  << danhSachMayTinh[i].ten
             << danhSachMayTinh[i].diemHieuNang
             << danhSachMayTinh[i].gia << endl;
    }
}

int main() {
    vector<MayTinh> danhSachMayTinh;

    int luaChon;
    do {
        cout << "1. Them may tinh moi\n";
        cout << "2. Thay doi gia\n";
        cout << "3. Hien thi danh sach\n";
        cout << "0. Thoat\n";
        cout << "Nhap lua chon: ";
        cin >> luaChon;

        switch (luaChon) {
            case 1:
                themMayTinh(danhSachMayTinh);
                break;
            case 2:
                thayDoiGia(danhSachMayTinh);
                break;
            case 3:
                hienThiDanhSach(danhSachMayTinh);
                break;
        }
    } while (luaChon != 0);

    return 0;
}
