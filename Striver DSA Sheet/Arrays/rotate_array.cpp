// Rotating array to the left
#include<iostream>
using namespace std;
// Function to rotate array to the right
void rotate(int arr[], int n)
{
    int key = arr[n-1];
    int tempswap;
    for(int i = 0; i < n; i++)
    {
        tempswap = arr[i];
        arr[i] = key;
        key = tempswap;
    }
    // arr[n-1] = key;
}
// Function to rotate array left n times
void multiple_rotation(int arr[], int n, int rotation)
{
    int tempswap;
    while(rotation--)
    {
        int key = arr[0];
        for(int i = n-1; i >= 0; i--)
        {
            tempswap = arr[i];
            arr[i] = key;
            key = tempswap;
        }
    }
}
int main()
{
    int arr[] = {1,6,7,2,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Before Rotating: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    cout<<endl;

    rotate(arr,n);
    cout<<"Array after Rotating: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }

    multiple_rotation(arr, n ,3);
    cout<<"\nArray after multiple Rotation: ";
    for(int i: arr)
    {
        cout<<i<<" ";
    }
    return 0;
}