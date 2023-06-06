#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[] = {2,4,6,8,54,67,32,78,111,444,333};
    int size=11;
    
     int maxi = INT_MIN;

     for(int i=0; i<size;i++){
     if(arr[i]>maxi){
        // found a number greater than maxi, update maxi

        maxi= arr[i];
     }
    
     }
     cout<<"Maximum number is"<<maxi<<endl;
}
