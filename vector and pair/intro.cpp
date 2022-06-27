#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(3);
    char ch;
    cout<<"enter y to add and n to exit: ";
    cin>>ch;
    while(ch=='y'){
        int n;
        cin>>n;
        v.push_back(n);
        cout<<"want to add more: ";
        cin>>ch;
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++){
    //     cout<<*it<<" ";
    // } 
    // for(auto element:v){
    //     cout<<element<<" ";
    // }
    v.pop_back();
    vector<int> v2 (3,50);
    swap(v,v2);
    for(auto element:v){
        cout<<element<<" ";
    }
    cout<<endl;
    for(auto element:v2){
        cout<<element<<" ";
    }

    return 0;
}