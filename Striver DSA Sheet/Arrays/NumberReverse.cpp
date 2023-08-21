#include<iostream>
using namespace std;
int reverse(int num){
    int c = 0;
    while (num>0)
    {
        c = c*10 + num%10;
        num = num/10;
    }
    return c;
}
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
cout<<"After reversing the given number it becomes: "<<reverse(n);
return 0;
}