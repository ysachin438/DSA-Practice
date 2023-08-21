#include<bits/stdc++.h>
using namespace std;
int main(){
vector< int > s;
s.push_back(4);
s.push_back(5);
s.push_back(8);
cout<<"The elements in the vector: ";
for(auto i = s.begin(); i!=s.end();i++){
    cout<<*i<<" ";
}
cout<<"\nThe last element of the vector is : ";
s.pop_back();
cout<<s.back();
cout << "\nThe front element of the vector: " << s.front();
  cout << "\nThe last element of the vector: " << s.back();
  cout << "\nThe size of the vector: " << s.size();
  cout << "\nDeleting element from the end: " << s[s.size() - 1];
  s.pop_back();


return 0;
}