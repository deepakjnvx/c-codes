#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout<<"enter any three numbers: ";
    cin>>a>>b>>c;
    if(a*a==b*b+c*c){
        cout<<"this is a pythagorian triplet.";
    }
    else if(b*b==c*c+a*a){
        cout<<"this is a pythagorian triplet.";
    }
    else if(c*c==b*b+a*a){
        cout<<"this is a pythagorian triplet.";
    }else{
        cout<<"it is not a pythagorian triplet.";
    }
    
    return 0;
}