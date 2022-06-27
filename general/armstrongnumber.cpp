#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k, remainder;
    int sum = 0;
    cin >> n;
    k = n;
    int m=n;
    int digit = 0;
    while (n > 0)
    {
        n = n / 10;
        digit++;
    }
    // cout<<digit;
    while (m > 0)
    {
        remainder = m % 10;
        int p = pow(remainder, digit);
        sum += p;
        m = m / 10;
        
    }
    if (sum == k)
    {
        cout << k << " is an ARMSTRONG NUMBER";
    }
    else
    {
        cout << k << " is not an ARMSTRONG NUMBER";
    }
    return 0;
}