#include<iostream>
using namespace std;
bool flag=0;
int first(int a[],int n,int p,int k){
    if (p==n)
    {
        return -1;
    }
    if(a[p]==k){
        return p+1;
    }
    return first(a,n,p+1,k);
    
}

int last(int a[],int n, int p, int k){
    if(p==n) return -1;
    int l= last(a,n,p+1,k);
    if(a[p]==k && flag==0){
        flag=1;
        return p+1;
    }
    return l;
}

/*int last(int a[],int n, int p, int k){
    if(i==n) return -1;
    int restarr = last(a,n,p+1,k);
    if(restarr!=-1) return restarr;
    if(a[p]==k) return i+1;
    return -1;
}*/

int main()
{
    int n,p=0,k;
    cout<<"Enter the size of the array  ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements  ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the no. to be checked  ";
    cin>>k;
    cout<<first(a,n,p,k)<<" "<<last(a,n,p,k);  
    return 0;
}