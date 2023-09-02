#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int a[n];
    unordered_map < int, int> ump;
    cout<<"Enter the elements: ";
    for(int i=0; i < n ; i++){
        cin>>a[i];
        ump[a[i]]++;
    }
    int num;
    cout<<"Enter the number you want to find frequency: ";
    cin>>num;
    cout<<"The frequency of required number is "<<ump[num];
    return 0;
}