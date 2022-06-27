#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<"enter the array element: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){ 
        for(int i=0;i<n-counter;i++){
            if(arr[i]>arr[i+1]){
                int x=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=x;
            }
        }
        counter++;
    }
   cout<<"the sorted array is: ";
   for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    return 0;
}