#include <iostream>
#include <string>

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
const int Thongtinmaytinh = 20;



void Themthongtinmaytinh (Cauhinhmay a[], int &dem) {
    if (dem >= Thongtinmaytinh) {
        cout << "Ða dat gioi han !" << endl;
        return;
    }

    Cauhinhmay b;

    cout << "Nhap toc do may tinh: ";
    cin>>b.Tocdo;
    cout << "Nhap so loi cua CPU : ";
    cin>>b.Soloi;
    cout<<"Nhap RAM cua may tinh: ";
    cin>>b.Ram;
    cout<<"Nhap o cung cua may tinh: ";
    cin>>b.Ocung;
    do{
    	cout<<"Nhap diem danh gia ve may tinh: ";
    	cin>>b.Diemdanhgia;
    	if(b.Diemdanhgia<0){
    		cout<<"Khong hai long!";
		}
		}while(b.Diemdanhgia<0);
    do{
        cout << "Nhap gia cua may tinh (>= 0): ";
        cin >> b.Giamaytinh;
        if (b.Giamaytinh < 0) {
            cout << "Gia may tinh khong duoc la am. Nhap lai: " << endl;
        }
    }
		while (b.Giamaytinh < 0);

    a[dem] = b;
    dem++;
    cout << "Hoan thanh!" << endl;
}

void Thaydoimaytinh(Cauhinhmay a[], int dem) {
    int Thutu;
    cout << "Nhap so thong tin may tinh de thay doi (0 den " << dem - 1 << "): ";
    cin >> Thutu;

    if (Thutu< 0 || Thutu >= dem) {
        cout << "Khong hop le!" << endl;
        return;
    }

    cout << "Nhap toc do may tinh moi:  ";
    cin>>a[Thutu].Tocdo;
    cout << "Nhap so loi cua CPU moi: ";
    cin>> a[Thutu].Soloi;
    cout<<"Nhap RAM cua may tinh: ";
    cin>> a[Thutu].Ram;
    cout<<"Nhap o cung cua may tinh: ";
    cin>> a[Thutu].Ocung;
    do{
    	cout<<"Nhap diem danh gia ve may tinh: ";
    	cin>>a[Thutu].Diemdanhgia;
    	if(a[Thutu].Diemdanhgia<0){
    		cout<<"Khong hai long! Nhap lai: ";
		}
		
	}	while(a[Thutu].Diemdanhgia);
	
    

    do {
        cout << "Nhap gia cua may tinh moi (>= 0): ";
        cin >> a[Thutu].Giamaytinh;
        if (a[Thutu].Giamaytinh < 0) {
            cout << "Gia may tinh khong duoc la am. Nhap lai: " << endl;
        }
    } while (a[Thutu].Giamaytinh < 0);

    cout << "Cap nhat thanh cong!" << endl;
}

void Danhsachmaytinh(Cauhinhmay a[], int dem) {
    if (dem == 0) {
        cout << "Chua co thong tin may tinh nao duoc luu tru." << endl;
        return;
    }

    cout << "^^^^^ Danh sach thong tin ve may tinh ^^^^^" << endl;
    for (int i = 0; i < dem; i++) {
        cout << "Thong tin ve may tinh " << i << ":" << endl;
        cout << "Toc do: " << a[i].Tocdo << endl;
        cout << "So loi cua CPU: " << a[i].Soloi << endl;
        cout << "Ram : " << a[i].Ram << endl;
        cout << "O cung : " << a[i].Ocung << endl;
        cout << "Diem danh gia : " << a[i].Diemdanhgia << endl;
        cout << "Gia tien : " << a[i].Giamaytinh << endl;
        cout << "====================================" << endl;
    }
}

int main() {
    Cauhinhmay a[Thongtinmaytinh];
    int g= 0;
    int chon;
    while (1){
    cout << "----- Chon thong tin -----" << endl;
    cout << "1. Nhap thong tin may tinh" << endl;
    cout << "2. Thay doi thong tin may tinh" << endl;
    cout << "3. Hien thi tat ca " << endl;
    cout << "4. Thoat" << endl;
    cout << "Chon mot so tuy chon: ";
    cin>>chon;


        switch (chon) {
            case 1:
                Themthongtinmaytinh(a, g);
                break;
            case 2:
                Thaydoimaytinh(a, g);
                break;
            case 3:
                Danhsachmaytinh(a, g);
                break;
            case 4:
                cout << "Thoat." << endl;
               return 0;
            default:
                cout << "Khong hop le. Nhap lai: " << endl;
        }
    } while (chon != 4);

    return 0;
}

