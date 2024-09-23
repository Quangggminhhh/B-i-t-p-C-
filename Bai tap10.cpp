#include <iostream>
using namespace std;

int* tachMang(int* a, int size, int& Size1) {
    Size1 = (size + 1) / 2; 
    int* a1 = new int[Size1]; 
    for (int i = 1; i < size; i += 2) {
        a1[i / 2] = a[i];
    }

    return a1; 
}

int main() {
    int a[] = {10, 20, 30, 40, 50, 60}; 
    int size = sizeof(a) / sizeof(a[0]); 
	    int Size1;
    int* a1 = tachMang(a, size, Size1);
    cout << "Mang moi chua cac gia tri o vi tri chan:  ";
    for (int i = 0; i < Size1; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;
    delete[] a1;

    return 0;
}

