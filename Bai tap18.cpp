#include<iostream>
#include<string>
using namespace std;
struct Cautrichdan{
	string Nguoisangtac;
	string Noidung;
	int Soluotlike;
};
int main(){
	Cautrichdan a;
	cout<<"Nhap ten nguoi sang tac: ";
	cin.ignore();
	getline(cin,a.Nguoisangtac);
	cout<<"Nhap noi dung cau trich dan: ";
	getline(cin,a.Noidung);
	cout<<"Nhap so luot thich: ";
	cin>>a.Soluotlike;
	cout<<"\nThong tin ve cau trich dan: \n";
	cout<<"Ten nguoi sang tac: "<<a.Nguoisangtac<<endl;
	cout<<"Noi dung cau trich dan: "<<a.Noidung<<endl;
	cout<<"So luot thich: "<<a.Soluotlike<<" (like)"<<endl;
	return 0;
}
