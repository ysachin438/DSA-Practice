#include<iostream>
#include<vector>
using namespace std;
//BruteForce Approach
vector <int> leader(int arr[], int n)
{
    vector <int> ans;
    for(int i = 0; i<n; i++)
    {
        int didbreak = 0;
        for(int j = i+1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                didbreak = 1; 
                break;
            }
        }
        if(didbreak != 1) ans.push_back(arr[i]);
    }
    return ans;
} 
// Optimal Appraoch
void Leader(int arr[], int n)
{
    int max = arr[n-1];
    for(int i = n-1; i >= 0; i--)
    {
        if(arr[i] >= max) 
        {
            max = arr[i];
            cout<<arr[i]<<" ";
        }
    }    
}
int main(){
    int arr[] = {33,10, 22, 12, 3, 0, 6};
    int n =  sizeof(arr)/sizeof(arr[0]);
    vector <int> res = leader(arr, n);
    cout<<"The leader elements are: ";
    for(auto it = res.begin(); it != res.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    Leader(arr, n);
return 0;
}