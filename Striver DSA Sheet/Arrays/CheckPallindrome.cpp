#include<iostream>
using namespace std;
int check_pallindrome(string s){
    for(int i = 0, j= s.length()-1; i!=j;i++,j--){
        if(s[i]!=s[j]){
            return false;
        }
    }
    return true;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    check_pallindrome(s)?cout<<"Yes it is a pallindrome.":cout<<"No, it is not a pallindrome.";

return 0;
}