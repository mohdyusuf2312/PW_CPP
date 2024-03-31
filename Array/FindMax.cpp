#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the size of array : ";
	cin>>n;
	
	long long arr[n];
	
	cout<<"Enter the elements of array : ";
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	
	long long max = LONG_LONG_MIN;
//	for(int i=0; i<n; i++)
//	{
//		if(max<arr[i]) max=arr[i];
//	}
	
	cout<<"Maximum in array is : "<<max;
	
	return 0;
}

