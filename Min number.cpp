#include <iostream>
#include<limits.h>
using namespace std;

int main() {
  
int arr[]={2,5,7,20,45};
int size=5;

int mini= INT_MAX;

for(int i=0; i<size; i++){
  if(arr[i]<mini){
    mini=arr[i];

  }
}
cout<<mini;
  return 0;
}
