#include<iostream>
#include<string>
using namespace std;
int count_digit(int num){
    int c = 0;
    while(num>0){
        num = num/10;
        c++;
    }
    return c;
}
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
cout<<"Number of digit in given number is: "<<count_digit(n);
//Another approach
string s = to_string(n);
cout<<s.length();
return 0;
}