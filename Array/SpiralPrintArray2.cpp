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
	
	int rstart , cstart;
	
	cout<<"Enter start row number ";
	cin>>rstart;
	rstart--;
	cout<<"Enter start column number : ";
	cin>>cstart;
	cstart--;
//	int minr = 0, minc = 0, maxr = m-1, maxc = n-1;
	
	int count = 0;
	
//	cout<<endl<<arr[rstart][cstart]<<" ";
//	cstart++;
//	count++;
	int r = 1, d = 1, l = 1, u = 1;
	while(count < n*m)
	{
		for(int i = 1; i<=r; i++)  // right movement
		{
			if(rstart>=0 && rstart <=(m-1) && cstart>=0 && cstart<=n-1)
			{
				cout<<arr[rstart][cstart]<<" ";
				cstart++;
				count++;
			}
			else continue;
		}
		if(count >= n*m) break;
		r += 2;
//		minr++;
		
		for(int i = 1; i<= d; i++) // down movement
		{
			if(rstart>=0 && rstart <=(m-1) && cstart>=0 && cstart<=n-1)
			{
				cout<<arr[rstart][cstart]<<" ";
				rstart++;
				count++;
			}
			else continue;
		}
		if(count >= n*m) break;
		d += 2;
//		maxc--;
		
		for(int i = 0; i<=l; i++) // left movement
		{
			if(rstart>=0 && rstart <=(m-1) && cstart>=0 && cstart<=n-1)
			{
				cout<<arr[rstart][cstart]<<" ";
				cstart--;
				count++;
			}
			else continue;
		}
		if(count >= n*m) break;
		l += 2;
//		maxr--;
		
		for(int i = 0; i<=u; i++) // up movement
		{
			if(rstart>=0 && rstart <=(m-1) && cstart>=0 && cstart<=n-1)
			{
				cout<<arr[rstart][cstart]<<" ";
				rstart--;
				count++;
			}
			else continue;
		}
		if(count >= n*m) break;
		u += 2;
//		minc++;
	}
	return 0;
}
