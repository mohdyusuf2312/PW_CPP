//Program to print Pascal triangle

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter the height of the triangle : ";
	cin>>n;
	
	for(int i=0; i<=n; i++)
	{
		int curr=1;
		for(int j=1; j<=n-i; j++)
		{
			cout<<" ";
		}
		for(int k=0; k<=i; k++)
		{
			cout<<curr;
			curr = curr*(i-k)/(k+1);
			cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}

