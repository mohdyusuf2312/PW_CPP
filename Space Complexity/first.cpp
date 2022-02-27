#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> a;
    vector<int> b;

    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 15; j++){
            a.push_back(10);
            b.push_back(5);
        }
    }
    
    for(int i = 0; i < 151; i++){
        cout<<a[i]<<"   "<<b[i]<<endl;
    }

    return 0;
}