#include<iostream>
using namespace std;
int i=0,j=0;
int main()
{	int temp;
	int a[10];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{

		cin>>a[i];
	}
	
	
	for(int i=0;i<(n/2);i++)	
	{
		for(int j=(n-1);j>(n/2);j--)
		{
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
			i++;	
		}
	}
	for(int i=0;i<n;i++)
	{
	cout<<a[i];
	}
return 0;
}
