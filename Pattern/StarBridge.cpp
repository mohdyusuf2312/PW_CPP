//Program to print Star Bridge:

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter a number : ";
	cin>>n;
	
	int m=n-1;
	int nsp=1;
	
	for(int i=1; i<=2*n-1; i++)
	{
		cout<<"*";
	}
	cout<<endl;
	
	for(int j=1; j<=m; j++)
	{
		for(int k=1; k<=m+1-j; k++)//for stars
		{
			cout<<"*";
		}
		for(int l=1; l<=nsp; l++)//for spaces
		{
			cout<<" ";
		}
		nsp+=2;
		for(int o=1; o<=m+1-j; o++)//for stars
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

