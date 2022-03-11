// Inbuilt Sorting

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter elements of vector:"<<endl;
    for(int i=0; i<5; i++){
        cout<<i+1<<" element : ";
        cin>>v[i];
    }

    sort(v.begin(),v.end()); // Add #include<algorithm> to use sort


    return 0;
}