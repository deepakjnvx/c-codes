#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter the array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int x = arr[0];
    
    for (int j = 0; j < n; j++)
    {
        if (x < arr[j])
        {
            x = arr[j];
        }
        cout << "max no. upto " << j + 1 << " entries is " << x << endl;
    }

    return 0;
}