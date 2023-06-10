#include <iostream>

using namespace std;

int main()
{
int arr [500];

int n;
cout<<"Enter the value of arr"<<endl;

cin>>n;

for(int i=0;i<n;i++){
   cin>>arr[i]<<endl;
}

for(int i=0; i<n; i++){
    cout<<2*arr[i]<<endl;
}


    return 0;
}
