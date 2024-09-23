#include <iostream>
using namespace std;


int* noiMang(int* a, int sizeA, int* b, int sizeB, int& Size) {
    Size = sizeA + sizeB;
    int* a1 = new int[Size]; 
    for (int i = 0; i < sizeA; i++) {
        a1[i] = a[i];
    }

    for (int i = 0; i < sizeB; i++) {
        a1[sizeA + i] = b[i];
    }

    return a1;
}

int main() {
    int a[] = {1, 2, 3}; 
    int b[] = {4, 5, 6, 7}; 
    
    int sizeA = sizeof(a) / sizeof(a[0]); 
    int sizeB = sizeof(b) / sizeof(b[0]); 
    int Size;
    int* a1 = noiMang(a, sizeA, b, sizeB, Size);
    cout << "Mang moi sau khi noi: ";
    for (int i = 0; i < Size; i++) {
        cout << a1[i] << " ";
    }
    cout << endl;
    delete[] a1;

    return 0;
}
