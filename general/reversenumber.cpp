#include <iostream>
using namespace std;

int main() {
    int n,l,r;
    cin>>n;
    while(n>0){
        l=n%10;
        r=r*10+l;
        n=n/10;
    }
    cout<<r;
    return 0;
}