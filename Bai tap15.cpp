#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct MovieData
{
	string Tenphim;
	string Tendaodien;
	double Namphathanh;
	double Thoiluong; 
	
};
void HienThiThongTin(const MovieData& a) {
    cout << "\nThong tin ve bo phim: \n";
    cout << "Ten phim: " << a.Tenphim << endl;
    cout << "Dao dien: " << a.Tendaodien << endl;
    cout << "Nam phat hanh: " << a.Namphathanh << endl;
    cout << "Thoi luong: " << a.Thoiluong << " (phut)" << endl;
}
int main()
{
	MovieData m,n;
    cout << "Nhap thong tin cho bo phim 1:";
    cout << "Nhap ten phim: ";
      cin.ignore();
    getline(cin, m.Tenphim);
    cout << "Nhap ten dao dien: ";
    getline(cin, m.Tendaodien);
    cout << "Nhap nam phat hanh: ";
    cin >> m.Namphathanh;
    cout << "Nhap thoi luong cua phim: ";
    cin >> m.Thoiluong;


    cout << "\nNhap thong tin cho bo phim 2:\n";
        cin.ignore();
    cout << "Nhap ten phim: ";
    getline(cin, n.Tenphim);
    cout << "Nhap ten dao dien: ";
    getline(cin, n.Tendaodien);
    cout << "Nhap nam phat hanh: ";
    cin >> n.Namphathanh;
    cout << "Nhap thoi luong cua phim: ";
    cin >> n.Thoiluong;

    HienThiThongTin(m);
    HienThiThongTin(n);
	return 0;
}
