#include <iostream>
using namespace std;

int main() {
    int col,row;
    cin>>col>>row;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col){
                cout<<"*";
            }
            else{cout<<" ";}
        }cout<<endl;
        
    
    }
    
    return 0;
}