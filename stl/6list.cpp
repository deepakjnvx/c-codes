#include<iostream>
#include<list>
#include<algorithm>
using namespace std;
int main()
{
    list<int> l;
    list<int> l1{1,2,3,10,8,5};
    list<string> l2{"Apple","Guava","Mango","Banana"};
    l2.push_back("pineapple");
 
    l2.sort();

    l2.reverse();

    cout<<l2.front()<<endl;
    l2.pop_front();
    l2.push_front("kiwi");
    cout<<l2.back()<<endl;
    l2.pop_back();
    // for(auto it=l2.begin();it!=l2.end();it++){
    //     cout<<*it<<" ";
    // }
    cout<<endl;
    for(auto s:l2){
        cout<<s<<"-->";
    }
    
    l2.push_back("orange");
    l2.push_back("Guava"); 
    cout<<endl;
    for(auto s:l2){
        cout<<s<<"-->";
    }
    cout<<endl;
    string f;
    cin>>f;
    l2.remove(f);
    
    for(auto s:l2){
        cout<<s<<"-->";
    }
    auto i = l2.begin();
    i++;i++;
    l2.erase(i);
    cout<<endl;
    for(auto s:l2){
        cout<<s<<"-->";
    }
    auto j=l2.begin();
    j++;j++;
    l2.insert(j,"Litchi");
    cout<<endl;
    for(auto s:l2){
        cout<<s<<"-->";
    }
    return 0;
} 