#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr(12,0);
    // for (int i = 0 ;i<arr.size(); i++){
    //     cout<<arr[i];
    // }

    for (const int& i : arr) {
        // i = 1; gives error because of constant: you can't change the value.
        cout << i << "  ";
    }

    return 0;
}