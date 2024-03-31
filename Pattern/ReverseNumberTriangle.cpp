#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter max column number : ";
	cin>>n;
	
	for(int i=0; n>i; n--)
	{
		for(int j=0; j<n; j++)
		{
			cout<<j+1;
		}
		cout<<endl;
	}
	return 0;
}

