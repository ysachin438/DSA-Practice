/*
Kadane’s Algorithm : Maximum Subarray Sum in an Array
Problem Statement: Given an integer array arr, find the contiguous subarray 
(containing at least one number) which
has the largest sum and returns its sum and prints the subarray.*/
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// vector <int> subarray(int arr[], int n)
// {
//     int left = 0;
//     int sum = 0;
//     int maxsum = 0;
//     vector <int> ans(2);
//     for(int right = 0; right < n; right++)
//     {
//         if(sum > maxsum)
//         {
//             if(sum >= arr[right])
//             {
//                 maxsum =  sum;
//                 ans[0] = left;
//                 ans[1] = right;
//             }
//             else
//             {
//                 left = right;
//                 sum = arr[right];
//                 maxsum = sum;
//                 ans[0] = left;
//                 ans[1] = right;
//             }
//         }
//         else if (sum < maxsum)
//         {
//             sum = sum - arr[right];
//             left++;
//         }
    
//     }
// }
vector <int> Subarray(int arr[], int n)
{
    int maxsum = 0;
    int left = 0;
    int right = 0;
    vector <int> ans(3);
    for(int k = 0; k <n;k++)
    {
        for(int i = 0; i < n ; i++)
        {
            int sum = 0;
            for(int j = k; j < i; j++)
            {
                sum += arr[j];
            }
            if(sum >= maxsum)
            {
                maxsum = sum;
                ans[0] = k;
                ans[1] = i;
            }
        }
    }
    ans[2] = maxsum;
    return ans;
}
int main()
{
    int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
    int size = sizeof(arr)/sizeof(arr[0]);
    vector <int> res = Subarray(arr, size);
    cout<<"The array is : ";
    for(int i = res[0]; i < res[1]; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nThe sum is: "<<res[2];
    return 0;

}