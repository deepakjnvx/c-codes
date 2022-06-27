#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
vector<vector<int>> ans;
// void permute(vector<int> &v,int idx){
//     if(idx==v.size()){
//         ans.push_back(v);
//         return;
//     }
//     for(int i=idx;i<v.size();i++){
//         swap(v[i],v[idx]);
//         permute(v,idx+1);
//         swap(v[i],v[idx]);
//     }
//     return;
// }

int main()
{
    int c;
    vector<int> v;
    cout<<"enter 1 to enter element and -11 to exit: ";
    cin>>c;
    while(c!=(-11)){
        cin>>c;
        v.push_back(c);
    }
    v.pop_back();
    // permute(v,0);

    sort(v.begin(),v.end());
    do{
        ans.push_back(v);
    }while(next_permutation(v.begin(),v.end()));

    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }

  
    return 0;
}