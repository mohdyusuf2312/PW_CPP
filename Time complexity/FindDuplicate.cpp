#include<iostream>
#include<vector>
using namespace std;
int main()
{
    
    vector <int> arr = {1, 5, 6, 7, 4, 3, 2, 4};
    
    // Method 1

    // bool flag = false;
    // for(int i = 0; i < arr.size(); i++){
    //     for(int j = i+1; j < arr.size(); j++){
    //         if (arr[i]==arr[j]){
    //             cout<<arr[i]<<" is duplicate.";
    //             flag = true;
    //             break;
    //         }
    //     }
    //     if(flag == true) break;
    // }

    // Method 2

    // vector<int> def(8,0);
    // for(int i = 0; i < arr.size(); i++){
    //     if(def[arr[i]]==0) def[arr[i]] = 1;
    //     else cout<<arr[i]<<" is duplicate.";
    // }

    // Method 3

    int n = arr.size()-1;
    int s = n*(n+1)/2;
    int sum = 0;
    for(int i = 0; i < arr.size(); i++){
        sum += arr[i];
    }
    int dup = sum - s;
    cout<<dup<<" is duplicate.";

    return 0;
}