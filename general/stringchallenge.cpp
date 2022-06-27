#include <iostream>
using namespace std;

int main() {
	// int n;
	// cin>>n;
	// for(int i=1;i<=n;i++){
	    int s;
	    cin>>s;
	    char a[s];
	    for(int j=0;j<s;j++){
	        cin>>a[j];
	    }
	    int count=1;
	    for(int l=0;l<n;l++){
	        if(a[l]=='a' || a[l]=='e'||a[l]=='i'||a[l]=='o'||a[l]=='u'){
	                continue;
	        }
	        if(a[l]=='c'||a[l]=='g'||a[l]=='l'||a[l]=='r'){
	            count=count*2;
	        }
	    }
	    cout<<count;
	    
	// }
	return 0;
}
// a b *c d e f *g h i j k *l m n o p q *r s t u v w x y z 
