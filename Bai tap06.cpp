#include<iostream>
#include<algorithm>
using namespace std;
void Sapxepdiem(double *diem,int size){
	sort (diem, diem + size);
}
double Diemtrungbinh(double *diem, int size)
{
	double S=0;
	int i=0;
	for(i=0;i<size;i++){
		S+=*(diem+i);
		
	}
	return S/size;
}
int main()
{
	int Soluongdiem;
	cout<<"Nhap so luong diem kiem tra: "; 
	cin>>Soluongdiem;
	if(Soluongdiem<=0){
		cout<<"So luong diem phai lon hon 0"<<endl;
		return 1;
	}
	double *diem=new double [Soluongdiem];
	for (int i=0;i<Soluongdiem;++i){
		do{
			cout<<"Nhap diem kiem tra thu "<< i+1 <<":";
			cin>> diem[i]<0;
			if (diem[i]<0){
				cout<<"Diem khong duoc la so am. Vui long nhap lai "<<endl;
			}
		}
		while(*(diem+i)<0);
	}
	Sapxepdiem(diem,Soluongdiem);
	double a=Diemtrungbinh(diem,Soluongdiem);
	cout<<"\nDanh sach diem da sap xep: \n";
	for (int i = 0; i <Soluongdiem; ++i)
		{
			cout<< diem [i]<< " ";
		}
	cout <<"\nDiem trung binh: "<<a<<endl; 
	  int Soluongdonggop;
    cout << "Nhap luong dong gop: ";
    cin >> Soluongdonggop;
    while (Soluongdonggop <= 0) {
        cout << "So luong dong gop phai lon hon 0. Nhap lai. ";
        cin >> Soluongdonggop;
    }

    double* Donggop = new double[Soluongdonggop];
    for (int i = 0; i < Soluongdonggop; ++i) {
        cout << "Nhap diem dong gop " << (i + 1) << ": ";
        cin >> Donggop[i];
    }
    cout << "\nCac dong gop:\n";
    for (int i = 0; i < Soluongdonggop; ++i) {
        cout << "Dong gop" << (i + 1) << ": " << Donggop[i] <<endl;
    }
    delete[] Donggop;
	delete[] diem; 
	}
