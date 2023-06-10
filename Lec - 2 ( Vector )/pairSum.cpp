
#include<iostream>
#include<vector>
using namespace std;

int main()

{
   vector<int>arr{10,20,30,40,50};
   int sum=80;
   
   // print all pairs
   
   // outer lopp will traverse for each element 
   
for(int i=0;i<arr.size();i++ ){
   // cout<<"we are at element"<<arr[i]<<endl;
    int element=arr[i];

    for(int j=i+1; j<arr.size();j++){
        //cout<<"pair"<<element<<"with"<<arr[j]<<endl;
        if(element + arr[j]==sum){
            cout<<"pair found"<<element <<" ,"<<arr[j]<<endl;
        }
    }
}
 
}
