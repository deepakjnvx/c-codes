//print all substrings...
#include<iostream>
using namespace std;

string allsubstr(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return 0;
    }
    char ch=s[0];
    string ros=s.substr(1);
    allsubstr(ros,ans);
    allsubstr(ros,ans+ch);

}
int main()
{
    string s,ans="";
    cout<<"Enter the string ";
    cin>>s;
    allsubstr(s,ans);
    return 0;
}