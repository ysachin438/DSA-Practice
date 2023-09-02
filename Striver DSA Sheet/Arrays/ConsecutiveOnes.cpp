// Problem Statement: Given an array that contains only 1 and 0 
// return the count of maximum consecutive ones in the array.

#include<iostream>
using namespace std;
int ConsecutiveOnes(int arr[],int size)
{
    if(size<=1)
    {
        return size;
    }
    int maxstreak = 0;
    int k  = 0;
    for(int i = 1; i < size; i++)
    {
        if((arr[i-1] == arr[i] && arr[i] == 1) || arr[i] == 1)
        {
            k++;
            if( k >= maxstreak)
            {
                maxstreak = k;
            }
        }
        else
        {
            k = 0;
        }
    }
    return maxstreak;
}
int main()
{
    int arr[] ={1,0,0,0,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<ConsecutiveOnes(arr, size);
    return 0;
}