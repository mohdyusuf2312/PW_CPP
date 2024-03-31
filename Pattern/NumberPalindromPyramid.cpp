//Program to print number palindrome pyramid:

#include<iostream>
using namespace std;
int main()
{
	int h;
	
	cout<<"Enter the height of the pyramid : ";
	cin>>h;
	
	for(int i=1; i<=h; i++)
	{
		for(int j=1; j<=h-i; j++)// for spaces
		{
			cout<<" ";
		}
		for(int k=1; k<=i; k++)// for increasing numbers
		{
			cout<<k;
		}
		for(int l=i-1; l>=1; l--)// for decreasing numbers
		{
			cout<<l;
		}
		if(i<h) cout<<endl;
	}
	return 0;
}

