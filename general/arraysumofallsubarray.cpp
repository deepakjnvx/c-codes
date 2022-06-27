#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int p=1;
    for(int j=0;j<n;j++){
        int sum=0;
        for(int k=j;k<n;k++){
            sum=sum+a[k];
            cout<<"the sum of subarray no. "<<p<<" = "<<sum<<endl;
        p++;   
        }
    }
    return 0;
}