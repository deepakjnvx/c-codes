#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int a[n];
    cout << "enter the elements of array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                int k = a[j];
                a[j] = a[i];
                a[i] = k;
            }
        }
    }
    cout << "the sorted array is:- " << endl;
    for (int k = 0; k < n; k++)
    {
        cout << a[k] << " ";
    }
    return 0;
}