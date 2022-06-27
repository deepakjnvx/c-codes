#include<iostream>
using namespace std;
bool checksort(int a[],int n){
    if(n==1) return true;
    bool restarray= checksort(a+1,n-1);
    return (a[0]<a[1] && restarray);
    
}
int main()
{   
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(checksort(a,n)) cout<<"it is sorted";
    else cout<<"it is unsorted";
    return 0;
}