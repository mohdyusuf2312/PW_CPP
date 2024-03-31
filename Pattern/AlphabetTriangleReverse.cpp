#include<iostream>
using namespace std;
int main()
{
	char n;
	int diff;

	cout<<"Program to print letter square :"<<endl;
	cout<<"Enter Max letter : ";
	cin>>n;
	
	if((n>=97) && (n<=122)) 
	{
		diff=n-96;
		
		for(int i=1; diff>=i; diff--)
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
		
		for(int i=1; diff>=i; diff--)
		{
			for(int j=0; j<diff; j++)
			{
				cout<<char('A'+j);
			}
			cout<<endl;
		}
	}
	else cout<<"Invalid Input ";
	
	return 0;
}
