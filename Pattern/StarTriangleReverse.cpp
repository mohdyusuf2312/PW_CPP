#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter a number";
	cin>>n;
	
	for(int i=0; n>i; n--){
		for(int j=0; j<n; j++){
			cout<<"*";
		}
		if(n>1) cout<<endl;
	}
	return 0;
}

