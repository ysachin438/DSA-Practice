/*
Stock Buy And Sell
Problem Statement: You are given an array of prices where 
prices[i] is the price of a given stock on an ith day.
You want to maximize your profit by choosing a single day 
to buy one stock and choosing a different day in the future to sell that stock. Return the maximum profit you can achieve from this transaction. 
If you cannot achieve any profit, return 0.
*/
#include<iostream>
using namespace std;
int stock(int arr[], int n)
{
    int maxp = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(arr[j] > arr[i])
            {
                if(maxp < (arr[j] - arr[i]))
                {
                    maxp = arr[j] - arr[i];
                }
            }
        }
    }
    if(maxp == 0) return 0;
    return maxp;
}
int main()
{
    // int arr[] = {7,1,5,3,6,4};
    int arr[] = {7,6,4,3,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"The max. profit is: "<<stock(arr, n);
    return 0;
}