// Binary Search Alorithm
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,4,6,12,13,15};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = n;
    int mid = (i+n-1)/2;
    int key = 15;
    int count =0 ;
    while(i < j)
    {
        if(key == arr[mid]){ cout<< " found "<<mid<<endl; break;}
        else if(key < arr[mid])
        {
            j = mid;   
        }
        else
        {
            i = mid+1;  
        }
        mid = (i+j)/2;
        count++;
    }
    cout<<" Count "<<count<<endl;
    return 0;
}