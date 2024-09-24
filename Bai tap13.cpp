#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
double Tinhtrungbinh(const vector<int>& numbers) {
    double S = 0;
   for (size_t i = 0; i < numbers.size(); i++) {
        S += numbers[i];
    }
    return S / numbers.size();
}
double TinhMedian(vector<int> numbers) {
    sort(numbers.begin(), numbers.end());
    int n = numbers.size();
    if (n % 2 == 0) {
        return (numbers[n / 2 - 1] + numbers[n / 2]) / 2.0;
    } else {
        return numbers[n / 2];
    }
}
int TinhMode(const vector<int>& numbers) {
    int maxValue = numbers[0];
    int maxCount = 0;
    
    for (int i = 0; i < numbers.size(); i++) {
        int count = 0;
        for (int j = 0; j < numbers.size(); j++) {
            if (numbers[j] == numbers[i]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            maxValue = numbers[i];
        }
    }
    return maxValue;
}

int main() {
    int Sosinhvien;
    cout << "Nhap so sinh vien de khao sat: ";
    cin >> Sosinhvien;

    if (Sosinhvien <= 0) {
        cout << "So sinh vien phai la so duong." << endl;
        return 1;
    }

    vector<int> Sophim(Sosinhvien);

    for (int i = 0; i < Sosinhvien; i++) {
        cout << "Nhap so phim sinh vien thu " << (i + 1) << " da xem: ";
        int phim;
        cin >> phim;
        while (phim < 0) {
            cout << "So phim khong duoc la so am. Vui long gap lai: ";
            cin >> phim;
        }
        Sophim[i] = phim;
    }

    double trungbinh = Tinhtrungbinh(Sophim);
    double median = TinhMedian(Sophim);
    int mode = TinhMode(Sophim);

    cout << "\nSo lieu thong ke: " << endl;
    cout << "Trung binh so phim: " << trungbinh << endl;
    cout << "Median so phim: " << median << endl;
    cout << "Mode so phim: " << mode << endl;

    return 0;
}

