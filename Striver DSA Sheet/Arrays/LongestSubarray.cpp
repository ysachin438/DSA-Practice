//  Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
#include<iostream>
#include<map>
using namespace std;
void longest_subarray(int arr[], int size, int target)
{
    int sum = 0;
    int j = 0;
    int maxlength = 0;
    for(int i = 0; i < size; i ++)
    {
        sum += arr[i];
        if (sum == target)
        {
            if(maxlength <= (i-j+1))
            {
                maxlength = (i - j) + 1;
            }
        }       
        else
        {
            sum = sum - arr[j];
            j++;
            i--;
        }
    }
    cout<<maxlength;
}
int main()
{
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    longest_subarray(arr, n, 15);
    return 0;
}