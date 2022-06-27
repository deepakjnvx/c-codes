#include<iostream>
using namespace std;

int sum(int n){
    if(n==1) return 1;

    return n+sum(n-1);

}

int main()
{
    int n;
    cout<<"enter the no.";
    cin>>n;
    cout<<"sum till n is: "<<sum(n);

    return 0;
}