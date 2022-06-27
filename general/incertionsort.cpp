#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int a[n];
    // cout<<"enter the elements of array ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    for(int i=1;i<n;i++){
        int current=a[i];
        int j=i-1;
        while(a[j]>current){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    cout<<"The sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}