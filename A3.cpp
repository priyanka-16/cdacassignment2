#include<iostream>
using namespace std;

int main()
{
	int a=10;
	int *p;
	p=&a;
	int **dp;
	dp=&p;
	cout<<p<<endl;
	cout<<dp<<endl;
	cout<<*dp<<endl;
	cout<<**dp<<endl;
	return 0;
}
