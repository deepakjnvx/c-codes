#include<iostream>
using namespace std;

int binarysearch(int a[],int n,int key){
    int s=0,e=n;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==key) return mid+1;
        if(a[mid]<key){
            s=mid+1;
        }
        else e=mid-1;
    } 
    return -1;
}

int main()
{
    int n,key;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter the elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the element to search"<<endl;
    cin>>key;
    cout<<binarysearch(a,n,key);
    return 0;
}