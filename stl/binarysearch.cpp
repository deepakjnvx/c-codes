#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    
    int a[]={1,2,3,3,3,6,7,8,9};
    int n = sizeof(a)/sizeof(int);
    
    int key;
    cin>>key;

    bool present=binary_search(a,a+n,key);
    if(present) cout <<"present"<<endl;
    else cout<<"absent"<<endl;
    
    auto lb=lower_bound(a,a+n,key);

    auto ub=upper_bound(a,a+n,key);

    cout<<lb-a<<" "<<ub-a<<endl;

    cout<<"frequency: "<<(ub-a)-(lb-a);
    return 0;
}