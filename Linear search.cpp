#include<iostream>
using namespace std;

bool find(int arr[],int size,int key) {
    //linear search

     for(int i=0;i<size;i++ ){
        if(arr[i]==key)
        return true;
     }

     // not present

     return false;

}


int main()
{

int arr[5] = {1,3,5,7,9 } ;
int size=5;

cout<<"Enter the key to find"<<endl;
int key;
cin>>key;

if(find(arr,size,key)) {
    cout<<"found"<<endl;
}
else{
    cout<<"not found"<<endl;
}

return 0;
}

// Second method

#include<iostream>
using namespace std;

int main()
{
    
    int arr[5]={1,2,3,4,5};
    int size=5;
    
    int key=0;
    
    bool flag =0;

    // 0 -> not found
    // 1 -> found
    
    for(int i=0; i<size;i++){
        if(arr[i]==key){
            flag=1;
        }
    }
        
        if(flag)
        cout<<"Present";
        else
        cout<<"absent";
       
    return 0;
}
