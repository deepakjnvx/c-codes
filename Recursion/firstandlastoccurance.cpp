//FIRST AND LAST OCCRENCE IN AN ARRAY
#include<iostream>
using namespace std;
//bool flag1=0,flag2=0;
void falo(int a[],int n,int p){
    int f,l;
    bool flag1;
    for(int i=0;i<n;i++){
        if(a[i]==p && flag1==0){
           f=i+1;
           flag1=1;
        }
        if(a[i]==p && flag1==1){
            l=i+1;
        } 
    }
    cout<<f<<" "<<l;    
}

int main()
{
    int n,p;
    cout<<"Enter the size of the array ";
    cin>>n;
    int a[n];
    cout<<"Enter the array elements ";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"enter the no. to be checked";
    cin>>p;
    falo(a,n,p);    
    return 0;
}