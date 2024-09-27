#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
struct Diengia
{
	string Ten;
 long long Sodienthoai;
	string Chude;
	double Chiphi;
};
int main()
{
	Diengia a;
	cout<<"Nhap ten: ";
	getline(cin,a.Ten);
	cout<<"Nhap so dien thoai: ";
	cin>>a.Sodienthoai;
	cout<<"Nhap chu de bai phat bieu: ";
	cin.ignore();
		getline(cin,a.Chude);
	cout<<"Nhap chi phi dien thuyet: ";
	cin>>a.Chiphi;
	cout<<"\n Thong tin ve mot dien gia \n";
	cout<<"Ten: "<<a.Ten<<endl;
	cout<<"So dien thoai: "<<a.Sodienthoai<<endl;
	cout<<"Chu de bai phat bieu: "<<a.Chude<<endl;
	cout<<"Phi dien thuyet: "<<a.Chiphi<<" VND "<<endl;
	return 0;
	
}
