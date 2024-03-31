//Program to print Alphabet R:

#include<iostream>
using namespace std;
int main()
{
//	int n=5;
	
//	cout<<"Enter number of rows you want (Please enter odd number) : ";
//	cin>>n;
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=25; j++)
		{
			if((j==1)||(i==1&&j==2)||(i==1&&j==3)||(i==2&&j==4)||(i==3&&j==2)||(i==3&&j==3)||(i==4&&j==3)||(i==5&&j==4)) cout<<"*";
			else cout<<" ";
		}
		cout<<endl;
	}
//	for(int i=1; i<=5; i++)
//	{
//		for(int j=1; j<=25; j++)
//		{
//			if((j==1)||(i==1&&j==2)||(i==1&&j==3)||(i==2&&j==4)||(i==3&&j==2)||(i==3&&j==3)||(i==4&&j==3)||(i==5&&j==4)
//			||(j==6)||(i==5&&j==7)||(j==8)
//			||(i==1&&j==10)||(i==1&&j==11)||(i==1&&j==12)||(i==2&&j==10)||(i==3&&j==10)||(i==3&&j==11)||(i==3&&j==12)||(i==4&&j==12)||(i==5&&j==10)||(i==5&&j==11)||(i==5&&j==12)
//			||(j==14)||(i==3&&j==15)||(j==16)
//			||(j==18)||(i==1&&j==19)||(i==2&&j==20)||(i==3&&j==20)||(i==4&&j==20)||(i==5&&j==19)
//			||(j==22)||(i==1&&j==23)||(j==24)||(i==3&&j==23)) cout<<"*";
//			else cout<<" ";
//		}
//		cout<<endl;
//	}
	
	return 0;
}

