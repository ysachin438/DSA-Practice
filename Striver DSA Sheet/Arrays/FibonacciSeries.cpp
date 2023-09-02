#include<iostream>
using namespace std;
int fibo(int a, int b, int n){
    if(n<2){
        return n;
    }
    else{
    int c = a+b;
    cout<<c<<" ";
    fibo(b,c,n-1);
    }
}
int main(){
int a =0, b =1;
fibo(a,b,10);
return 0;
}