#include <iostream>
using namespace std;

int main() {
      int i,k,a,b,c,d;
      cin>>a>>b;
      if(a<b){
          c=a;
          d=b;
      }
      else{
          c=b;
          d=a;
      }
      for(k=c;k<d;k++){
          for(i=2;i<k;i++){
              if(k%i==0){
                  cout<<k<<" is not a prime number."<<endl;
                  break;
        }
       
       }
              if(i==k){
               cout<<k<<" is a prime number."<<endl;
            }
       }
            
    return 0;
}