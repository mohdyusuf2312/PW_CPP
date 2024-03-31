//Intresting method to print Flipped triangle or a reverse triangle:
//Using with two for loops:

#include<iostream>
using namespace std;
int main()
{
	int n;
	
	cout<<"Enter number of rows : ";
	cin>>n;
	
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=n; j++)
		{
			if((i+j)>=n+1) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}

