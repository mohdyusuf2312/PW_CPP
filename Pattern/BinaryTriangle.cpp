//Program to print binary triangle

#include<iostream>
using namespace std;
int main()
{
	int n,a;
	
	cout<<"Enter a number of rows : ";
	cin>>n;
	
//	for(int i=1; i<=n; i++)
//	{
//		if(i%2!=0) a=1;
//		else a=0;
//		
//		for(int j=1; j<=i; j++)
//		{
//			cout<<a;
//			//flip the number
//			if(a==0) a=1;
//			else a=0;
//		}
//		cout<<endl;
//	}
	
//---------------------------------------------------
//Alternate of Binary Triangle
//---------------------------------------------------

	for(int i=1; i<=n; i++)
	{	
		for(int j=1; j<=i; j++)
		{
			if((i+j)%2==0) cout<<1;
			else cout<<0;
		}
		cout<<endl;
	}
	return 0;
}

