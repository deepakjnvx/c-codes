#include <iostream>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int p=1;
        bool flag = 0;
        while(p!=n)
        {   int k=n-p;
            if(k==0 && count==0){
                break;
            }
            if (k==1||k==2||k==3){
                p=n;
                count++;
                break;
            }
            if (flag == 0 && k >= 3)
            {
                p = p + 3;
                count++;
                flag = 1;
            }
            if (flag == 1 && k >= 2)
            {
                p = p + 2;
                count++;
                flag = 0;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
