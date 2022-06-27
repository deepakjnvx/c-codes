#include<iostream>
using namespace std;

int power(int n,int p){
    if(p==0) return 1;
    return n*power(n,p-1);
}

int main()
{
    int n,p;
    cout<<"Enter the base and power  ";
    cin>>n>>p;
    cout<<"The n^p is: "<<power(n,p);
    return 0;
}5