#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%4==0){
        if(n%100==0){
            if(n%400==0){
                cout<<n<<" is a leap year"<<endl;
            }
            else{
                cout<<n<<" is not a leap year";
            }
        }
        else{
            cout<<n<<" is a leap year";
        }
    }
    else{
        cout<<n<<" is not a leap year";
    }
    return 0;
}
