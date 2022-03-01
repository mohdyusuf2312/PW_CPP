// Inbuilt Sorting

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter elements of vector:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<" element : ";
        cin>>v[i];
    }


    return 0;
}