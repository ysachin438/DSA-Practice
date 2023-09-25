#include<iostream>
#include<vector>
#include<string>
using namespace std;
int upper_bound(vector <int> &arr, int target)
{
    for(int i = 0; i < arr.size(); i++)
    {
        if(arr[i]>= target)
        {
            return arr[i];
        }
    }
    return -1;
}
int u_b(vector<int> &arr, int target)
{
    int i = 0;
    int j = arr.size();
    while(i<j)
    {
        int mid = (i+j)/2;
        if(arr[mid]>=target) 
        {
            i = mid+1;
            target = arr[mid];
        }
        else j = mid;
    }
}
int main(){
    vector<int> arr = {1,2,2,4,5};
    cout<<"Upper bound is: "<<upper_bound(arr,3)<<endl;
    return 0;

}