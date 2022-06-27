#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.get();
    string s[n];
    for(int i=0;i<n;i++){
        getline(cin,s[i]);
    }
    for(int i=0;i<n;i++){
        cout<<s[i]<<endl;
    }
    return 0;
}