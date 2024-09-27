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
int main()
{
	MovieData m;
	cout<<"Nhap ten phim: ";
	cin>>m.Tenphim;
	cout<<"Nhap ten dao phim: ";
	cin>>m.Tendaodien;
	cout<<"Nhap nam phat hanh: ";
	cin>>m.Namphathanh;
	cout<<"Nhap thoi luong cua phim: "; cin>>m.Thoiluong; 
	cout<<"\nThong tin ve mot bo phim: \n";
	cout<<"Ten phim: "<<m.Tenphim<<endl;
	cout<<"Dao dien: "<<m.Tendaodien<<endl;
	cout<<"Nam phat hanh: "<<m.Namphathanh<<endl;
	cout<<"Thoi luong: "<<m.Thoiluong<<" (phut) "<<endl;
	return 0;
}
