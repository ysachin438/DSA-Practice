/*
Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted arrays.
The union of two arrays can be defined as the common and distinct elements in the two arrays.
NOTE: Elements in the union should be in ascending order.*/

#include<iostream>
#include<vector>
#include<set>
using namespace std;
int Union(int arr1[], int arr2[], int temp[], int n1, int n2)
{
    set <int> s;
    // int n1 = sizeof(arr1)/sizeof(arr1[0]);
    // int n2 = sizeof(arr2)/sizeof(arr2[0]);
    for(int i = 0; i < n1; i++)
    {
         s.insert(arr1[i]);
    }
    for(int j = 0; j < n2; j++)
    {
        s.insert(arr2[j]);
    }
    int ptr = 0;
    for(auto it = s.begin(); it != s.end(); it++)
    {
        temp[ptr] = *it;
        ptr++;
    }
    return ptr;
}
int main(){
    // vector <int> u_nion;
    int a1[] = {1,2,3,4,5};
    int a2[] = {3,4,5,6,7,8,9,0};
    int n1  = sizeof(a1)/sizeof(a1[0]);
    int n2  = sizeof(a2)/sizeof(a2[0]);
    int u_nion[n1 + n2];
    for(int i : a1)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i : a2)
    {
        cout<<i<<" ";
    }
    int len = Union(a1,a2, u_nion,n1,n2);
    cout<<"\nUnion of two array is: ";
    for(int i = 0; i < len; i++)
    {
        cout<<u_nion[i]<<" ";
    }
    return 0;
}
