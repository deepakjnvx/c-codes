//MOVE ALL X TO END OF THE STRING...
#include<iostream>
using namespace std;
string movex(string s){
    if(s.length()==0) return "";
    char ch=s[0];
    string ans=movex(s.substr(1));
    if(ch=='x') return ans+ch;
    else return ch+ans;
}
int main()
{
    string s;
    cin>>s;
    cout<<movex(s);
    return 0;
}