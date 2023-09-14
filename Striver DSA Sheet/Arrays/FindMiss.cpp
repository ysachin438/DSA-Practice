// Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one.
// Find that single one.
#include <bits/stdc++.h>
using namespace std;
int find(int arr[], int size)
{
    int XOR = 0;
    for (int i = 0; i < size; i++)
    {
        XOR = XOR ^ arr[i];
    }
    return XOR;
}
int main()
{
    int arr[] = {1, 0, 1, 0, 2, 2, 6, 7, 8, 9, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << find(arr, n);
    return 0;
}