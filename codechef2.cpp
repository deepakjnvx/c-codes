#include<bits/stdc++.h>
using namespace std;


int main() {
    int n;
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
        // auto f=find(a.begin(),a.end(),m);
        // for(int i=0;i<n;i++){
        //     if(a[i]==m){
        //         cout<<"Yes "<<i+1<<endl;
        //         flag=1;
        //         break;
        //     }
        // }
        // if((f-a)!=n){
        //     cout<<"Yes "<<f-a+1<<endl;
        //     flag=1;
        // }
        // if(flag==0){
            // cout<<"#";
            auto low = lower_bound(a, a + n, m);
            if(a[low-a]==m){
                cout<<"Yes "<<low-a+1;
                flag=1;
            }
            if(flag==0){
               cout<<"No "<<low-a+1<<endl; 
            }
            
        // }
    }
    return 0;
}
