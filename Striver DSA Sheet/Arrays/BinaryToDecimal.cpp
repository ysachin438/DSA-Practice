//Decimal To Binary
#include<iostream>
using namespace std;
// int result = 0;
int binary(int num){
//    result = (result*10) + (num%2);
    if(num>=1){
        cout<<num%2;
        num = num/2;
        return binary(num);
    }
    else{
        // cout<<num;
        return num;
    }
}

using namespace std;
int main(){
    int decimal;
    cout<<"Enter a number in decimal: ";
    cin>>decimal;
    cout<<"The binary of "<<decimal<<" is ";
    binary(decimal);
        return 0;
}