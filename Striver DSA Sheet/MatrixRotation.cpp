#include<bits/stdc++.h>
using namespace std;
void print(int arr[][3],int m, int n)
{
    for(int i = 0 ; i < m; i++){
        for(int j = 0; j < n; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
void matrix_rotation(int arr[][3], int m, int n)
{
    int temp[m][n] = {0};
    for(int i = 0; i < m; i++)
    {
        for(int j = n-1, k = 0; j >= 0 && k < n; j--, k++)
        {
            temp[i][k] = arr[j][i];
        }
    } 
    for(int i = 0 ; i < m; i++){
        for(int j = 0; j < n; j++){
            arr[i][j] = temp[i][j];
        }
    }
}
int main()
{
    int a[][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int m = 3;
    int n = 3;
    cout<<"Matrix before rotation: \n";
    print(a, m, n);
    matrix_rotation(a, m, n);
    cout<<"\nMatrix after rotation: \n";
    print(a, m, n);
    return 0;
}