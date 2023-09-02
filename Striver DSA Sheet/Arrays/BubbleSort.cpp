// Implementation of Bubble Sort.
#include <bits/stdc++.h>
using namespace std;
void bubble_sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
    int a[] ={5,8,1,9,7,1,3,6,8,1,1};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Array before sorting : ";
    for(int i: a){
        cout<<i<<" ";
    }
    bubble_sort(a, n);
    cout<<"\nThe array after sorting is: ";
    for(int i: a){
        cout<<i<<" ";
    }
    return 0;
}