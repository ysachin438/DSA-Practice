#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector <float> arr; 
        vector <int> arry(2);

        arr.push_back(45);
        arry.push_back(3);
        
        cout<<arr[0]<<endl;
        cout<<arry[2];
        for(auto it = arr.begin(); it!= arr.end(); it++)
        {
            cout << *it<<" ";
        }
return 0;
}