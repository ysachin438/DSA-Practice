// implementation of Selection Sort...
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a[] = {65, 27, 82, 0, 4, 40,0,0,0,0};
    int n = sizeof(a) / sizeof(a[0]);
    for (int i = 0; i < n-1; i++)
    {
        int min = a[i];
        for (int j = i; j < n; j++)
        { 
            if (min > a[j])
            {
                int p = min;
                min = a[j];
                a[j] = p;
            }
        }
        a[i] = min;
    }
    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}