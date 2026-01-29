#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
bool linearSearch(int mat[][3], int rows, int cols, int key){   //col val is mandatory to insert
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(key==mat[i][j]){
                return true;
            }
        }
    }
    return false;
}

pair<int, int> linSearch(int mat[][3], int rows, int cols, int key){   //col val is mandatory to insert
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            if(key==mat[i][j]){
                return {i, j};
            }
        }
    }
    return {-1, -1};
}

//MAXIMUM ROW SUM
int getMaxSum(int mat[][3], int rows, int cols){
    int maxRowSum = INT_MIN;
    for(int i=0; i<rows; i++){
        int currRowSum = 0;
        for(int j=0; j<cols; j++){
            currRowSum += mat[i][j];
        }
        maxRowSum = max(maxRowSum, currRowSum);
    }
    return maxRowSum;
}

//MAXIMUM COLn SUM
int getMaxColSum(int mat[][3], int rows, int cols){
    int maxColSum = INT_MIN;
    for(int j=0; j<cols; j++){
        int currColSum = 0;
        for(int i=0; i<rows; i++){
            currColSum += mat[i][j];
        }
        maxColSum = max(maxColSum, currColSum);
    }
    return maxColSum;
}

//DIAGONAL SUM
int diagonalSum(int mat[][4], int n){   //O(n^2)
    int Dsum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==j){
                Dsum += mat[i][j];
            }
            else if(j == n-1-i){
                Dsum += mat[i][j];
            }
        }
    }
    return Dsum;
}
//OPTIMISED DS
int diagSum(int mat[][4], int n){   //O(n)
    int Dsum = 0;
    //pd: j = i  &  sd: j = n-1-i
    for(int i=0; i<n; i++){
        Dsum += mat[i][i];

        if(i != n-1-i){     //also avoids adding common el twice
            Dsum += mat[i][n-1-i];     //focus
        }
    }
    return Dsum;
}

int main(){
    vector<vector<int>> mat = {{1,2,3}, {4,5,6}, {7,8,9,10,11,12,13}};  //3 x 3
    //rows => mat.size()    &    cols => mat[i].size()
    for(int i=0; i<mat.size(); i++){
        for(int j=0; j<mat[i].size(); j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    //int arr[5] = {1,2,3,4,5};
    //   [size row] [size col]
    int matrix[4][3] = {{1,2,3}, {4,5,6}, {7,8,9},{10,11,12}};
    int rows = 4;   //u need to define
    int cols = 3;

    int matx[4][4] = {{1,2,3,13}, {4,5,6,14}, {7,8,9,15},{10,11,12,16}};
    int n=4;
    
    cout<<matrix[0][0]<<endl;   //1st el
    cout<<matrix[0][1]<<endl;
    cout<<matrix[3][2]<<endl;   //last el
    //can INPUT in the same way replace with cin int matrix[4][3];
    //to print the whole matrix - nested loops
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl; //matrix lookin
    }
    cout<<endl;

    cout<<linearSearch(matrix, rows, cols, 8)<<endl;    //returning true/false

    pair<int,int> result = linSearch(matrix, rows, cols, 8);
    cout << result.first << " " << result.second << endl;   //return index

    cout<<getMaxSum(matrix, rows, cols)<<endl;
    cout<<getMaxColSum(matrix, rows, cols)<<endl;
    cout<<diagonalSum(matx, n)<<endl;
    cout<<diagSum(matx, n)<<endl;
    return 0;

}