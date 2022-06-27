#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int j;
        for(j=1;j<=n-i;j++){
            cout<<"  "; 
        }
        int k=i;
        for(;j<=n;j++){
            cout<<k--<<" ";
        }
        
        for(k=2;k<=i;k++){
            cout<<k<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}