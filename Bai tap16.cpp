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
	double Chiphisanxuat;
	double Doanhthunamdau;
	double Doanhthu;
	
};
int main()
{
	MovieData m;
	cout<<"Nhap ten phim: ";
	getline(cin, m.Tenphim);
	cout<<"Nhap ten dao phim: ";
	getline(cin, m.Tendaodien);
	cout<<"Nhap nam phat hanh: ";
	cin>>m.Namphathanh;
	cout<<"Chi phi san xuat:  ";
	cin>>m.Chiphisanxuat;
	cout<<"Doanh thu nam dau: ";
	cin>>m.Doanhthunamdau;
	m.Doanhthu= m.Doanhthunamdau - m.Chiphisanxuat;
	cout<<"Nhap thoi luong cua phim: "; cin>>m.Thoiluong; 
	cout<<"\nThong tin ve mot bo phim: \n";
	cout<<"Ten phim: "<<m.Tenphim<<endl;
	cout<<"Dao dien: "<<m.Tendaodien<<endl;
	cout<<"Nam phat hanh: "<<m.Namphathanh<<endl;
	cout<<"Thoi luong: "<<m.Thoiluong<<" (phut) "<<endl;
	cout<<"Chi phi san xuat: "<<m.Chiphisanxuat<<endl;
	cout<<"Doanh thu nam dau: "<<m.Doanhthunamdau<<endl;
	cout<<fixed<<showpoint<<setprecision(2);
	if(m.Doanhthu >=0){
	cout<<"Loi nhuan trong nam vua qua: $ "<<m.Doanhthu<<endl;
}else {
	cout<<"Lo von trong nam vua qua: $"<<m.Doanhthu<<endl;
}
	return 0;
}
