#include <cmath>
#include <cstdio>
#include <climits>
#include <iostream>
using namespace std;


int main() {
    int n,k;
    int min=INT_MAX;
    bool flag=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int q;
    cin>>q;
    while(q--){
        int m;
        cin>>m;
        for(int i=0;i<n;i++){
            if(a[i]==m){
                cout<<"Yes "<<i+1<<endl;
                flag=1;
                break;
            }
            if(a[i]<min && a[i]>m){
                k=i+1;
                min=a[i];
            }
        }
        if(flag==0){
            cout<<"No "<<k<<endl;
        }
    }
    return 0;
}
