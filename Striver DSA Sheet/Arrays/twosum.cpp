#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;
int twosum(int arr[], int size, int target)
{
    unordered_map <int, int> mapp;
    for(int i = 0; i< size; i ++)
    {
        if(mapp.find(target - arr[i]) != mapp.end())
        {
            return {i, mapp[target - arr[i]]};
        }
        mapp[arr[i]]++;
    } 
    return {-1,-1};
}
int main(){

return 0;
}