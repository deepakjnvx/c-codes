#include<iostream>
using namespace std;

void reverse(string s, int n){
    if(n<0) return;
    cout<<s[n];
    reverse(s,n-1);
}

int main()
{
    string s;
    cin>>s;
    reverse(s,s.size());
    return 0;
}