#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int count =1;
	    for(int i=0;i<n-1;i++){
	        if(a[i]!=a[i+1]){
	            if(i+2==n){
	                count+=2;
	            } else count++;  
	        }
	        else continue;
	    }
	    if(count==1) cout<<"0"<<endl;
	    else cout<<count<<endl;
	}
	return 0;
}
