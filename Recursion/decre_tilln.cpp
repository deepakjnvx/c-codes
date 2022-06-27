#include<iostream>
using namespace std;
void decre(int n){
    if(n==0) return;
    cout<<n<<" ";
    decre(n-1);
}
void incre(int n){
    if(n==0) return;
    incre(n-1);
    cout<<n<<" ";
}
int main()
{
    int n;
    cout<<"enter the no. ";
    cin>>n;
    decre(n);
    incre(n);
    return 0;
}