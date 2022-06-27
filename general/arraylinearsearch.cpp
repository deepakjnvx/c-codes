#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        cin>>array[i];
    }
    cout<<"enter number to search"<<endl;
    cin>>x;
    for(int j=0;j<n;j++){
        if(x==array[j]){
            cout<<"the number "<<x<<" is at no. "<<j+1;
        }
    }
    return 0;
}