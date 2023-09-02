// You are given an array of integers, your task is to move all the zeros in the array
//  to the end of the array and move non-negative integers to the front by maintaining their order
#include<iostream>
using namespace std;
void move_zero(int arr[], int n)
{
    int k = 0;
    int ptr = 0;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == 0)
            {
                k++;
                continue;
            }
            arr[ptr] = arr[i];
            ptr++;
        }
        while(k--)
        {
            arr[n-k] = 0;
        }
}
int main()
{
    int arr[] = {1,0,4,2,0,45,98,0,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"Array before sending zeros to end: ";
    for(int i : arr){
        cout<<i<<" ";
    }

    move_zero(arr, n);
    cout<<"\nArray after sending zeros to end: ";
    for(int i : arr){
        cout<<i<<" ";
    }
}