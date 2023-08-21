#include <iostream>
using namespace std;
int main()
{
    int n;
    n = 6;
    // pattern 1:
    /*
        4 4 4 4 4 4 4
        4 3 3 3 3 3 4
        4 3 2 2 2 3 4
        4 3 2 1 2 3 4
        4 3 2 2 2 3 4
        4 3 3 3 3 3 4
        4 4 4 4 4 4 4

    */
    for (int i = n; i > 0; i--)
    {
        
        for (int j =  n; j > 0; j--)
        {
            if (j < i)
            {
                cout << i<<" ";
            }
            else
            {
                cout << j<<" ";
            }
        }
        for (int j = 2; j <=  n ; j++)
        {
            if (j < i)
            {
                cout << i<<" ";
            }
            else
            {
                cout << j<<" ";
            }
        }
        cout << "\n";
    }
    for(int i=2;i<=n;i++){
        for(int j=n;j>0;j--){
            if(j<=i){
                cout<<i<<" ";
            }
            else{
                cout<<j<<" ";
            }
        }
        for(int k=2;k<=n;k++){
            if(k<=i){
                cout<<i<<" ";
            }
            else{
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }

    // PATTERN 2:
    /*
        *
       * *
      * * *
     * * * *
    * * * * *

    */
    // Logic:
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }
    // PATTERN 3:
    /*
        *
       * *
      * * *
     * * * *
    * * * * *
     * * * *
      * * *
       * *
        *

    */
    // Logic:
    // for (int i = 1; i < n; i++)
    // {
    //     for (int j = n; j > i; j--)
    //     {
    //         cout << " ";
    //     }
    //     for (int k = 1; k <= i; k++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }
    // for (int i = 1; i < n-1; i++)
    // {
    //     for (int m = n - i; m <= n ; m++)
    //     {
    //         cout << " ";
    //     }
    //     for (int l = i; l < n-1; l++)
    //     {
    //         cout << " *";
    //     }
    //     cout << endl;
    // }

    // PATTERN 4:
    /*
    *
    * *
    * * *
    * * * *
    * * * * *
    * * * *
    * * *
    * *
    *

    */
    //    for(int i=0;i<n;i++){
    //     if(i== n-1){
    //         int temp =i;
    //         while(temp--){
    //             for(int k=0;k<=temp;k++){
    //                 cout<<"* ";
    //             }
    //             cout<<endl;
    //         }
    //         continue;
    //     }
    //     for(int j=0;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    //    }

    return 0;
}