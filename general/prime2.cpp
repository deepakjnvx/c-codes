#include <iostream>
using namespace std;
int checkprime(int num){
        for(int j=2;j<num;j++){
            if(num%j==0){ 
            return false;
            } 
        }
        return num;
    }

int main() {
    
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        if(checkprime(i) && i>1){
            cout<<checkprime(i)<<" ";
        };
    }
    return 0;
}