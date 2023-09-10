/*Problem Statement: You are given an array of ‘N’ integers. 
You need to find the length of the longest sequence which contains the consecutive elements.*/

#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void consecutive_subarray(int arr[], int n)
{
    int maxlen = 0;
    int count  = 0;
    for(int i = 1; i < n; i++){
        if(arr[i] == arr[i-1] - 1)
        {
            count ++;
            if(count >= maxlen) maxlen = count;
        }
        else
        {
            count = 0;
        }
    }
}
//Another Approach
int subarray(int arr[], int n)
{
    sort(arr, arr + n);
    int maxlen = 0;
    int count  = 1;
    for(int i = 1; i < n; i++){
        // cout<<arr[i]<< " and "<<arr[i-1]+1<<endl;
        if(arr[i] == arr[i-1]+1)
        {
            count ++;
            if(count >= maxlen) maxlen = count;
        }
        else
        {
            count = 1;
        }
    }
    return maxlen;
}
int main(){
    int arr[] = {100, 200, 1, 3, 2, 4};
    int n =  sizeof(arr)/sizeof(arr[0]);
    cout<<subarray(arr, n)<<endl;;
return 0;
}