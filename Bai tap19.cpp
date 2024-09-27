#include <iostream>
#include<string>
#include<iomanip>
using namespace std;

 struct Cautrich {
    string Dodai;
    int Sothich;
} ;

void Hamtinh(Cautrich a[], int n) {
    int Soluotthich = 0;

    for (int i = 0; i < n; i++) {
        if (a[i].Sothich < 0) {
            printf("So luot thich khong duoc am.\n");
            return;
        }
       Soluotthich += a[i].Sothich;
    }

    double Luotthichtrungbinh= (double)Soluotthich / n;
    cout<<fixed<<setprecision(2);
    cout<<"Luot thich trung binh: \n"<< Luotthichtrungbinh<<endl;

    cout<<"\nCau trich pho bien hon muc trung binh:\n";
    for (int i = 0; i < n; i++) {
        if (a[i].Sothich > Luotthichtrungbinh) {
            double Phantram = ((double)a[i].Sothich/ Soluotthich) * 100;
            cout<<"Cau trich dan: \""<<a[i].Dodai<<"\" - So luot thich: "
            <<a[i].Sothich<< " (" <<Phantram<<")"<<endl;
        }
    }
}

int main() {
    int n;

    cout<<"Nhap so luong cau trich dan: ";
    cin>>n;
Cautrich a[n];
cin.ignore();
    for (int i = 0; i < n; i++) {
        cout<<"Nhap cau trich dan thu "<< i + 1<<endl;
        getline(cin, a[i].Dodai);  
        cout<<"Nhap so luot thich: ";
        cin>>a[i].Sothich;
        cin.ignore();
    }
    Hamtinh(a,n);

  

    return 0;
}

