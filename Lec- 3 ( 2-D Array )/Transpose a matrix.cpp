// Rows ---> Cols
// Cols ---> Rows

#include <iostream>
#include<limits.h>
using namespace std;

void transpose(int arr[][3],int r, int c , int transposeArr){
    for(int i=0;i<r; i++){
        for(int j=0; j<c; j++){
            swap(arr[i][j], arr[j],[i]); 
        }
    }
}

void printArray(int arr[][3],int r, int c){
    for(int i=0;i<r; i++){
        for(int j=0; j<c; j++){
            cout<<arr[i][j]<<" ";
}

cout<<endl;
}

int main()
{
    
  int arr[3][3];
  int rows=3;
  int cols=3;
   
  for(int i=0;i<rows;i++){
      for(int j=0; j<cols; j++){
          cin>>arr[i][j];
  }
}

  for(int i=0;i<rows;i++){
      for(int j=0; j<cols; j++){
          cout<<arr[i][j]<<" ";
  }
    
    cout<<endl;
}


printArray(arr,row,cols);
int transposeArr[3][3];
transpose(arr,rows,cols,transposeArr);
printArray(transposeArr,rows,cols);
// cout<<getMax(arr,rows,cols);
return 0;
}
