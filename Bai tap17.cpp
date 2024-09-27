#include <iostream>
#include <string>

using namespace std;

struct Dongdat {
    string Ten;
    string Vitri;
    int Nam;
    float Dolon;
    int Songuoithietmang;
};

int main() {

    Dongdat a[3] = {
        {"Tran dong dat A", "Vi tri A", 2022, 6.5, 100},
        {"Tran dong dat B", "Vi tri B", 2023, 7.2, 200},
        {"Tran dong dat C", "Vi tri C", 2021, 5.8, 50}
    };

 
    for (int i = 0; i < 3; i++) {
        cout << "Tran dong dat " << (i + 1) << ":\n";
        cout << "Tên: " << a[i].Ten << endl;
        cout << "Vi tri: " << a[i].Vitri << endl;
        cout << "Nam: " << a[i].Nam << endl;
        cout << "Do lon: " << a[i].Dolon << endl;
        cout << "So nguoi thiet mang:  " << a[i].Songuoithietmang << endl << endl;
    }

    return 0;
}

