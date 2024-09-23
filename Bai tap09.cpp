#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

double Hamtinh(vector<int>& a) {
    sort(a.begin(), a.end());
    int n = a.size();  

    if (n % 2 == 1) {  
        return a[n / 2];
    } else { 
        return (a[n / 2 - 1] + a[n / 2]) / 2.0;
    }
}

int main() {
    vector<int> data1;
     data1.push_back(3);
    data1.push_back(1);
    data1.push_back(4);
    data1.push_back(2);
    data1.push_back(5);
    cout << "Median cua data: " << Hamtinh(data1) << endl; 

    return 0;
}

