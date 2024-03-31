// To print rhombus:

#include<iostream>
using namespace std;
int main()
{
	int SideOfRhombus;
	
	cout<<"Enter the Side of Rhombus : ";
	cin>>SideOfRhombus;
	
	for(int i=1; i<=SideOfRhombus; i++)
	{
		for(int j=1; j<=SideOfRhombus-i; j++)
		{
			cout<<" ";
		}
		for(int k=1; k<=SideOfRhombus; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}

