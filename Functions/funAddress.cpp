#include<iostream>
using namespace std;
void fun(int x, int y)
	{
		cout<<"Address of function x : "<<&x<<endl;
		cout<<"Address of function y : "<<&y;
	}
int main()
{
	int x,y;
	cout<<"Address of main x : "<<&x<<endl;
	cout<<"Address of main y : "<<&y<<endl<<endl;
	fun(x,y);
	return 0;
}

