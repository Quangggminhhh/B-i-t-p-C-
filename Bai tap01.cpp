#include<iostream>
using namespace std;
int main()
{
	const int size=10;
	int a[size]={1,4,6,3,8,9,5,11,14,17};
	cout<<"Kich thuoc cua mang: "<<sizeof(a)<<"byte \n";
	cout<<"Phan tu va dia chi:\n";
	int i=0;
	for(i=0;i<size;i++){
		cout<<"Phan tu "<<i<<" = "<<a[i]<<" tai dia chi: "<<&a[i]<<endl;
	}
	return 0;
}
