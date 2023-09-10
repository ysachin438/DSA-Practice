/*
Rearrange Array Elements by Sign
Variety-1
Problem Statement:
There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements. Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.
Note: Start the array with positive elements.*/
#include<iostream>
#include<vector>
using namespace std;
void rearrange(int arr[], int n)
{
    int pos[n];
    int neg[n];
    int ps = 0;
    int ng = 0;
    //Separating Negative and Positive Numbers
    for (int i = 0; i < n; i++)
    {
        if(arr[i] >= 0)
        { pos[ps] = arr[i];
        ps++;
        } 
        else
        {
            neg[ng] = arr[i]; 
            ng++;
        }
    }
    // Copying positive and negative number in array alternatively
    int p = 0;
    int q = 0;
    int i = 0;
    while( p < ps && q < ng)
    {
        if(i%2 == 0)
        {
            arr[i] = pos[p];
            p++;
        }
        else
        {
            arr[i] = neg[q];
            q++;
        }
        i++;
    }
    while(p < ps){
        arr[i] = pos[p];
        p++;
        i++;
    }
    while(q < ng)
    {
        arr[i] = neg[q];
        q++;
        i++;
    }
}
int main(){
    int arr[] = {1,2,-4,-5};
    int n = sizeof(arr)/sizeof(arr[0]);
    rearrange(arr,n);
    cout<<"The rearranged array is: ";
    for(int i : arr){
        cout<<i<<" ";
    }
    return 0;
}
