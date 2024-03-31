#include<iostream>
using namespace std;
int main()
{
	int n,m;
	
	cout<<"Enter number of rows of matrix : ";
	cin>>n;
	cout<<"Enter number of column of matrix : ";
	cin>>m;
	
	int mat[n][m];
	
	cout<<"Enter elements of matrix : "<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"Enter ("<<i+1<<","<<j+1<<") element of matrix : ";
			cin>>mat[i][j];
		}
	}
	
	for(int i=n-1; i>=0; i--)
	{
		if(i%2==0)
		{
			for(int j=0; j<m; j++)
			{
				cout<<mat[j][i]<<"\t";
			}
		}
		else
		{
			for(int j=m-1; j>=0; j--)
			{
				cout<<mat[j][i]<<"\t";
			}
		}
		cout<<endl;
	}
	return 0;
}

