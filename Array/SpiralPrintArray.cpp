#include<iostream>
using namespace std;
int main()
{
	int m,n;
	cout<<"Enter number of rows : ";
	cin>>m;
	cout<<"Enter number of columns : ";
	cin>>n;
	
	int arr[m][n];
	
	for(int i = 0; i<m; i++)
	{
		for(int j = 0; j<n; j++)
		{
			cout<<"Enter element ("<<i+1<<" , "<<j+1<<") of matrix : ";
			cin>>arr[i][j];
		}
	}
	
	int minr = 0, minc = 0, maxr = m-1, maxc = n-1;
	
	int count = 0;
	
	while(minr<=maxr && minc <= maxc)
	{
		for(int i = minc; i<=maxc && count < n*m; i++)  // right movement
		{
			cout<<arr[minr][i]<<" ";
			count++;
		}
		minr++;
		
		for(int i = minr; i<=maxr && count < n*m; i++) // down movement
		{
			cout<<arr[i][maxc]<<" ";
			count++;
		}
		maxc--;
		
		for(int i = maxc; i>=minc && count < n*m; i--) // left movement
		{
			cout<<arr[maxr][i]<<" ";
			count++;
		}
		maxr--;
		
		for(int i = maxr; i>=minr && count < n*m; i--) // up movement
		{
			cout<<arr[i][minc]<<" ";
			count++;
		}
		minc++;
	}
	return 0;
}
