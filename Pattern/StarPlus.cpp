#include<iostream>
using namespace std;
int main()
{
	int n,mid;
	
	cout<<"Program to print Star Plus pattern "<<endl;
	cout<<"Enter the number length of star (Please enter odd number) : ";
	cin>>n;
	
	mid=(n/2)+1;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if((i==mid)||(j==mid)) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

