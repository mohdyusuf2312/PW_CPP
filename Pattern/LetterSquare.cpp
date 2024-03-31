#include<iostream>
using namespace std;
int main()
{
	char n;
	int diff;
//	int n;

	cout<<"Program to print letter square :"<<endl;
//	cout<<"Enter number of rows : ";
	cout<<"Enter Max letter : ";
	cin>>n;
	
	if((n>=97) && (n<=122)) 
	{
		diff=n-96;
		
		for(int i=0; i<diff; i++)
		{
			for(int j=0; j<diff; j++)
			{
				cout<<char('a'+j);
			}
			cout<<endl;
		}
	}
	else if((n>=65)&&(n<90)) 
	{
		diff=n-64;
		
		for(int i=0; i<diff; i++)
		{
			for(int j=0; j<diff; j++)
			{
				cout<<char('A'+j);
			}
			cout<<endl;
		}
	}
	else cout<<"Invalid Input ";

//----------------------------------------

//for A

//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout<<char(j+65);
//		}
//		cout<<endl;
//	}
	
//----------------------------------------------

//for a

//	for(int i=0; i<n; i++){
//		for(int j=0; j<n; j++){
//			cout<<char(j+65);
//		}
//		cout<<endl;
//	}
	
	
	return 0;
}

