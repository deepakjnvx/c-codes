#include <iostream>
using namespace std;
void fact(int p){
    int t=1;
    for(int i=1;i<=p;i++){
        t=t*i;
    }
    cout<<t;
    return;
}

int main() {
    int k;
    cin>>k;
    fact(k);
    return 0;
}