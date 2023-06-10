
// IMPORTANT

// n rows { index - ( 0 -> n-1 ) , m columns { index - ( 0 -> m-1 )


#include <iostream>

using namespace std;

int main()
{
    // declare 2D array
    
//     int arr[3] [3];
    
//     // Initialisation
    
//     int brr[3][3]={ 
//     {1,2,3,}
//     ,{4,5,6},
//     {7,8,9} } ;

// // row-wise print
// // outer loop

// for( int i=0; i<3; i++){
//     //for every row , we need to print value in each columns
//     for(int j=0; j<3;j++){
//         cout<<brr[i][j]<<" ";
        
//     }
//     cout<<endl;
// }

// // column-wise print

// cout<<"printing column wise"<<endl <<endl;

// for( int i=0; i<3; i++){
    
//     //for every row , we need to print value in each columns
    
//     for(int j=0; j<3;j++){
//         cout<<brr[j][i]<<" ";
//     }
// cout<<endl;
  
// }


// INPUT

int arr[4][3];
int rows=4;
int cols=3;

// row wise INPUT

for(int i=0;i<rows;i++){
    for(int j=0; j<cols;j++){
      cin>>arr[i][j];
      
    }
} 


for(int i=0;i<rows;i++){
    for(int j=0; j<cols;j++){
      cout<<arr[i][j]<<" ";
      
    }
   cout<<endl;
}


  return 0;
}
