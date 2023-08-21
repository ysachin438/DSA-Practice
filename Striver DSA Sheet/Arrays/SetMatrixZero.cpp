/*   Problem Statement: Given a matrix if an element in the matrix is 0 then you will have to 
set its entire column and row to 0 and then return the matrix.  */

#include<iostream>
using namespace std;
int main(){
    // declaring number of rows and columns in matrix;
    int m,n;
    cout<<"Enter the number of rows and coulmn: ";
    cin>>m>>n;
    //declaring a matrix of m x n
    // int matrix[m][n];
    int matrix[3][4] = {0,1,2,0,3,4,5,2,1,3,1,5};
    // creating an array which stores the index where the element is zero.
    int index[m*n],p=0;
    // assuming m > n
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                // store the index in another array
                index[p] = (i*100) + j;
                p++;
            }
        }
    }
    int x,y;
    for(int i=0;i<p;i++){
        // decoding index
        x = index[i]/100;
        y = index[i]%100;
        // converting row and coulmn into '0' of element zero.
        for(int j = 0; j<m;j++){
            matrix[x][j]=0;
        }
        for(int k= 0;k<n;k++){
            matrix[k][y]=0;
        }
    }
    // printing matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
   
}