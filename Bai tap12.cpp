#include <iostream>
using namespace std;
int* LocMang(int* a, int size, int b, int& Size1) {
    Size1 = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % b == 0) {
            Size1++;
        }
    }
    int* a1 = new int[Size1];
    int index = 0;
    for (int i = 0; i < size; i++) {
        if (a[i] % b == 0) {
            a1[index++] = a[i];
        }
    }

    return a1;
}

int main() {
    int a[] = {10, 14, 21, 28, 35, 42, 50, 63, 70};
    int size = sizeof(a) / sizeof(a[0]); 
    int b = 7; 
    int Size1;
    int* a1 = LocMang(a, size, b, Size1);
    cout << "Mang moi chi chua cac gia tri boi so cua " << b << " là: ";
    for (int i = 0; i < Size1; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;
    delete[] a1;

    return 0;
}

