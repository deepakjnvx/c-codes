#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
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