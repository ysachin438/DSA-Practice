#include<iostream>
using namespace std;
int reversearray(int a[], int start, int end){
    if(start < end){
        int temp = a[start];
    a[start] = a[end];
    a[end] = temp;
    reversearray(a, start+1, end-1);
    }
    return 0;
    
    
}
int main(){
    int arr[] ={1,2,3,4};
    
    cout<<"This is before recursion";
    reversearray(arr,0,3);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
    }