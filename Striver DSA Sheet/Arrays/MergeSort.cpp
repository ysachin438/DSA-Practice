#include<bits/stdc++.h>
using namespace std;
void merge(int arr[], int st, int mid, int end)
{
    //Creating temporary array
    vector <int> temp;
    int left = st; 
    int right = mid + 1;
    while (left <= mid && right <= end)
    {
        if(arr[left] < arr[right])
        {
            temp.push_back(arr[left]);
            left++;
        }
        else
        {
            temp.push_back(arr[right]);
            right++;
        }
    }
    // checking left and right array whether some elements left or not and appending them at end
    while(left <= mid)
    {
        temp.push_back(arr[left]);
            left++;
    }
    while(right <= end)
    {
        temp.push_back(arr[right]);
            right++;
    }
    for(int i = st; i <= end; i++)
    {
        // ** NEED TO UNDERSTAND **
        arr[i] = temp[i - st];
    }    
}
void mergesort(int arr[], int st, int end)
{
    if(st == end) return ;
    int mid = (st + end) / 2;
    //dividing left array n/2
    mergesort(arr, st, mid);
    //dividing right array n/2
    mergesort(arr, mid+1, end);
    //merging divided array
    merge(arr, st, mid, end);
}
int main()
{
    int arr[] = {6,4,1,0,4,5,9,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr, 0, size-1);
    cout<<"The sorted array is: ";
    for(int i = 0; i < size; i++)
    {
        cout<<i<<" ";
    }
    return 0;
}
/*
ADVANTAGES:
    -> avg time complexity: O( n*logn ) 
    -> space complexity: O (N) -- only temporary array takes space in worst case.
    -> Space complexity: 
    
    
    */