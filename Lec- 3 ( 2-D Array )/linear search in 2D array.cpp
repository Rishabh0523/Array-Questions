#include <iostream>
using namespace std;


bool findKey(int arr[][3] , int rows, int cols, int key) {
    for(int i=0;i<rows;i++){
    for(int j=0; j<cols; j++){
        if(arr[i][j]==key)
            
        return true;
    }
}

// value is not present

return false;
}

void printColWiseSum(int arr[3][3],int rows,int cols){
    // row sum --> row wise traversal
    
    // printing row wise sum
    
    for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum= sum + arr[j][i];
        }
        cout<< sum <<endl;
    }
}

int main()
{
    
int arr[3][3];
int rows=3;
int cols=3;

// row wise INPUT

for(int i=0;i<rows;i++){
    for(int j=0; j<cols;j++){
      cin>>arr[j][i];
      
    }
} 

// printing row wise

for(int i=0;i<rows;i++){
    for(int j=0; j<cols;j++){
      cout<<arr[j][i]<<" ";
      
    }
   cout<<endl;
}

//printColWiseSum(arr,rows,cols);
int key=1;

if(findKey(arr,3,3,12)){
cout<<"true";
  
}

else{
    cout<<"false";
}
return 0;
}
