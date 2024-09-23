#include<iostream>
using namespace std;
int doSomething(int* x, int* y)
{
	int temp= *x;
	*x= *y *10;
	*y=temp*10;
	return *x + *y;
	
}
int main()
{
	int a=5;
	int b=3;
	cout<<"Truoc khi goi ham a= "<<a<<", b= "<<b<<endl;
	int m= doSomething(&a, &b);
	cout<<"Sau khi goi ham a= "<<a<<", b= "<<b<<endl;
	cout<<"Ket qua: "<<m<<endl;
	return 0;
}
