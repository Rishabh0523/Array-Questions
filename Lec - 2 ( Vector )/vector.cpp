#include<iostream>
#include<vector>
using namespace std;
int main()

{

// create vector

vector<int> arr;

int ans = (sizeof(arr)/sizeof(bool));
cout<<ans<<endl;

cout<<arr.size() <<endl;
cout<<arr.capacity()<<endl;

arr.push_back(5);
arr.push_back(6);


for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";
}

cout<<endl;

arr.pop_back();

for(int i=0; i<arr.size(); i++){
    cout<<arr[i]<<" ";

cout<<endl;
}



int n;
cout<<"Enter the value of n"<<endl;
cin>>n;

vector<int> brr(n , -1);

cout<<"size of b " << brr.size() <<endl;
cout<<"size of capacity "<<brr.capacity() <<endl;

for(int i=0; i<brr.size(); i++){
    cout<<brr[i]<<" ";
}
cout<<endl;


cout<<"Printing crr"<<endl;

vector<int> crr{10,20,30,40};

for(int i=0; i<crr.size();i++){
cout<<crr[i] <<" ";
}

cout<<endl;
cout<<"Check crr is empty or not " <<crr.empty()<<endl;
vector<int>drr;
cout<<"drr is empty or not " <<drr.empty()<<endl;
return 0;

}