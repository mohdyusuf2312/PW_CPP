#include<iostream>
// #include<string>
using namespace std;
int main()
{
    string s = "abcdefgh";
    string sb = s.substr(2,4); //substr(starting index, length)
    cout<<sb;
}