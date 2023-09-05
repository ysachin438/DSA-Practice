/*
Rearrange Array Elements by Sign
Variety-1
Problem Statement:
There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.
Note: Start the array with positive elements.*/
#include<iostream>
using namespace std;
void rearrange(int arr[], int n)
{
    int neg = 1;
    int pos = 0;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        {
            arr[pos] = arr[i];
            pos += 2;
        }
        else
        {
            arr[neg] = arr[i];
            neg +=2;
        }
    }
}