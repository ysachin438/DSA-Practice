//Separation of +ve and -ve integer
#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;
    int arr[size];
    cout<<"Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int i = 0;
    int temp;
    for(int j=0; j<size;j++){
        if(arr[j]<0){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
    }
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}