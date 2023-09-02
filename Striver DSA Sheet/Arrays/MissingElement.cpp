/*
Problem Statement: Given an integer N and an array of size N-1 containing N-1 numbers between 1 to N. 
Find the number(between 1 to N), that is not present in the given array.*/

#include<iostream>
using namespace std;
int find(int arr[], int size,int n)
{
    int s1 = 0;
    int s2 = ((n*n) + n) / 2;
    for(int i = 0; i < size; i++)
    {
        s1 += arr[i];
    }
    return (s2 - s1);
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<find(arr, size, 10);
    return 0;
}
// Advantage is not using any extra space.