#include <iostream>
using namespace std;

int main()
{
    int n;
    
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int temp = 2, max = 2;
    for (int i = 0; i < n - 2; i++)
    {
        if ((a[i + 1] - a[i]) == (a[i + 2] - a[i + 1]))
        {
            temp++;
            if (temp > max)
            {
                max = temp;
            }
        }
        else
        {
            if (temp > max)
            {
                max = temp;
                temp = 2;
            }
            else
            {
                temp = 2;
            }
        }
    }
    cout << max;
    return 0;
}