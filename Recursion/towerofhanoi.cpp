#include<iostream>
using namespace std;


void toh(int n,char s,char d,char h,string p,string q,string r){
    if(n==0) return;
    toh(n-1,s,h,d,p,q,r);
    cout<<"MOVED FROM "<<s<<" to "<<d<<endl<<"#"<<n<<endl;
    //r.append(p,0,1);
    //p.erase(0,1);
    //cout<<"A: "<<p<<"  B; "<<q<<"  C: "<<r<<endl;
    
    toh(n-1,h,d,s,q,r,p); cout<<"*"<<n<<endl;
}

int main()
{
    int n;
    string p,q,r;
    q="";r="";
    cout<<"Enter the no. of blocks: ";
    cin>>n;
    cout<<"enter the name of blocks in ascending order without space: ";
    cin>>p;
    toh(n,'S','D','H',p,r,q);
    return 0;
} 