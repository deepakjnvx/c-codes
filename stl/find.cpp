#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[]={1,2,3,4,5,6,7,8,9};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    auto it= find(a,a+n,key);
    int index=it-a;
    if(index==n){
        cout<<"element is not present in array.";
    }
    else cout<<index;
    return 0;
}