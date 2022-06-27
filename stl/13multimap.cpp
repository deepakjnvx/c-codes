#include<iostream>
#include<string>
#include<map>
using namespace std;
int main()
{
    multimap<char,string> m;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        char ch;
        string s;
        cin>>ch>>s;
        m.insert(make_pair(ch,s));
    }
    auto it= m.begin();
    m.erase(it);    //O(logN)
       
    for(auto p:m){
        cout<<p.first<<"-> "<<p.second<<endl;
    }
    char a,b;
    cout<<"enter two character to get the list in between those"<<endl;
    cin>>a>>b;
    auto it2=m.lower_bound(a);
    auto it3=m.upper_bound(b);
    for(auto it4=it2;it4!=it3;it4++){
        cout<<it4->second<<" , ";
    }
    cout<<endl;
    cout<<"enter the character to be checked/deleted "<<endl;
    char c;
    cin>>c;
    auto f=m.find(c);   //O(logN)
    cout<<f->second<<endl;
    cout<<"enter y to delete it"<<endl;
    char d;
    cin>>d;
    if(d=='y'){
        m.erase(f); //O(logN)
    }
    cout<<"The rest list is:"<<endl;
    for(auto p:m){
        cout<<p.first<<"-> "<<p.second<<endl;
    }
    return 0;
}