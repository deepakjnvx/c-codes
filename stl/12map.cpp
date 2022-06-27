#include<iostream>
#include<map>
#include<string>
using namespace std;
int main()
{
    map<string,int> m;
    m.insert(make_pair("Mango",10));
    pair<string,int> p;
    p.first="Apple"; 
    p.second=120;
    m.insert(p);
    m["Banana"]=20;
    string f;
    cin>>f;
    auto it=m.find(f); //auto=map<string,int>::iterator
    if(it!=m.end()){
        cout<<"price of "<<f<<" is "<<m[f]<<endl;
    }
    else cout<<"not present";

    m[f]+=22;

    if(it!=m.end()){
        cout<<"price of "<<f<<" is "<<m[f]<<endl;
    }
    else cout<<"not present"<<endl;

    m.erase(f);

    // it stores unique keys only once
    // alternative to find fn

    if(m.count(f)){ 
        cout<<"price of "<<f<<" is "<<m[f];
    }
    else cout<<"not present"<<endl;

    m["Litchi"]=60;
    m["pineapple"]=80;
    for(auto it=m.begin();it!=m.end();it++){
        cout<<(*it).first<<" "<<it->second<<endl;
    }
    return 0;
}