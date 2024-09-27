#include<iostream>
#include<string>
using namespace std;
struct  Cauhinhmay
{
	float Tocdo;
	int Soloi;
	int Ram;
	int Ocung;
	float Diemdanhgia;
	float Giamaytinh;
};
int main()
{

 Cauhinhmay a;
 cout<<"Nhap toc do xung nhip cua bo xu ly: ";
 cin>>a.Tocdo;
 cout<<"Nhap so loi cua CPU: ";
 cin>>a.Soloi;
 cout<<"Dung luong Ram: ";
 cin>>a.Ram;
 cout<<"Dung luong o cung: ";
 cin>>a.Ocung;
 cout<<"Diem danh gia hieu suat:";
 cin>>a.Diemdanhgia;
 cout<<"Gia cua may tinh: ";
 cin>>a.Giamaytinh;
 cout<<"\nThong tin cau hinh may tinh \n";
 cout<<"Toc do xung nhip cua bo xu ly: "<<a.Tocdo<<endl;
 cout<<"So loi cua CPU: "<<a.Soloi<<endl;
 cout<<"Dung luong RAM: "<<a.Ram<<endl;
 cout<<"Dung luong o cung: "<<a.Ocung<<endl;
 cout<<"Diem danh gia hieu suat: "<<a.Diemdanhgia<<endl;
 cout<<"Gia cua may tinh: "<<a.Giamaytinh<<" Trieu dong "<<endl;
 return 0;
}
 
