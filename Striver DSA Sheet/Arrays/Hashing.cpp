#include<bits/stdc++.h>
using namespace std;
int has[10][2];
void insert(int a[],int size){
    for(int i=0;i<size;i++){
        if(a[i]>=0){
        has[a[i]][1] = 1; 
        }
        else{
            has[abs(a[i])][1] = 1;
        }
    }
}
bool search(int X){
    X = abs(X);
    if(has[X][1] == 1){
        return true;
    }
    return false;
}

int main(){
    //Using array
    // int a[] = {0,2,-3,4,1,6,7,-5,9};
    // int n = sizeof(a)/sizeof(a[0]);
    // insert(a,n);
    // int X;
    // cout<<"Enter the number you want to find: ";
    // cin>>X;
    // search(X)? cout<<"Present": cout<<"Not present."<<endl;
    
    // Using ordered map
    int a[] = {1,6,3,2,4,1,2,5,3,1,1,2};
    int n = sizeof(a)/sizeof(a[0]);
    map <int, int > p;
    for(int i=0;i<n;i++){
        // cin>>a[i];
        p[a[i]]++;
    } 
    cout<<"Enter the number: ";
    int number;
    cin>>number;
    cout<<"\nThe frequency of given number is "<<p[number];

    // using unordered map 
    unordered_map<int,int> ump;
    for(int i = 0; i < n; i++){
        ump[a[i]]++;
    }
    cout<<"\nThe frquency of given numbers is "<<ump[number];
    return 0;
}