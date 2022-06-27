#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main()
{
    // priority_queue<int> pq; //max heap by default
    priority_queue< int,vector<int>,greater<int> > pq;   //min priority queue
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int no;
        cin>>no;
        pq.push(no);        //O(logN)
    }
    while(!pq.empty()){
        cout<<pq.top()<<" ";  //O(1)
        pq.pop();             //O(logN)
    }
    return 0;
} 