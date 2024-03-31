//Program to print Floyd's Triangle Pattern:

#include<iostream>
using namespace std;
int main()
{
	int n,a=1;
	
	cout<<"Enter number of rows : ";
	cin>>n;
	
	if(n<1) cout<<"Invalid Input ";
	else
	{
		for(int i=1; i<=n; i++)
		{
			for(int j=1; j<=i; j++)
			{
				cout<<a<<" ";
				a++;
			}
			cout<<endl;
		}
	}

	return 0;
}

