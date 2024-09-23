#include <iostream>

using namespace std;

int Timmode(int *a, int n) {
    int max = *a;
    for (int i = 1; i < n; i++) {
        if (*(a + i) > max) {
            max = *(a + i);
        }
    }
    int *dem = new int[max + 1];
    for (int i = 0; i <= max; i++) {
        dem[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        dem[*(a + i)]++;
    }
    int mode = -1, Soluongtoida = 0;
    for (int i = 0; i <= max; i++) {
        if (dem[i] > Soluongtoida) {
            Soluongtoida = dem[i];
            mode = i;
        }
    }
    delete[] dem;

    return mode;
}

int main() {
    int a[] = {2, 3, 2, 4, 5, 2};
    int n = sizeof(a) / sizeof(a[0]);

    int mode = Timmode(a, n);

    if (mode != -1) {
        cout << "Mode: " << mode << endl;
    } else {
        cout << "Không có mode" << endl;
    }

    return 0;
}
