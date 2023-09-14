#include<iostream>
using namespace std;
int main () {
    int arr[] = {1,2,3,4,5,6,7};
    int n  = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    int j = n-1;
    int mid = (i+j)/2;
    int key;
    cout<<"Input: ";
    cin>>key;
    while(i <= j)
    {
        if(key == arr[mid])
        {
            cout<<"Found at "<<mid<<endl;
            // break;
        }
        else if(key < arr[mid])
        {
            j = mid-1;
        }
        else
        {
            i = mid+1;
        }
        mid = (i+j)/2;
    }
return 0;
}