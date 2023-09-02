// Implementation of INsertion Sort
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0;j < i; j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] =temp;
            }
        }
    }
}
    int main(){
        int arr[] = {1,7,2,3,0,44,5,2};
        int n = sizeof(arr)/sizeof(arr[0]);
        insertion_sort(arr,n);
    cout<<"The sorted array is-\n";
    for(int i : arr){
        cout<<i<<" ";
    }
        
    return 0;
    }