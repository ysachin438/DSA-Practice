//Pascal's Triangle
#include<iostream>
using namespace std;
int power(int p,int n = 11){
    // int result=0;
    for(int i=1;i<p;i++){
        n = n*n;
    }
    return n;
}
int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    for(int i=1;i<n;i++){
        for(int col = 1;col<n;col++){
            
        }
    }
    cout<<power(r);
    return 0;
}