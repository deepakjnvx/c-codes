#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int k=n;
    int p=n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(j>=p){
                cout<<"* ";
            }else{cout<<"  ";}
        }cout<<endl;p--;
    }
    return 0;
}