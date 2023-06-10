
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    // vector<vector<int> > arr;
    
    // vector<int> a{1,2,4};
    // vector<int> b{3,5,6};
    // vector<int> c{8,9,0};
    
    // arr.push_back(a);
    // arr.push_back(b);
    // arr.push_back(c);
    
    // for(int i=0; i<arr.size(); i++){
    //     for(int j=0;j<arr[0].size(); j++){
    //         cout<<arr[i][j]<<" ";
    //     }
        
    //     cout<<endl;
    // }
    
     
    // muskkil tarika
    
    int row=3;
    int cols=5;
    
    vector<vector<int> > arr(3, vector<int>(cols,0));
    
    for(int i=0; i<arr.size(); i++){
        for(int j=0;j<arr[0].size(); j++){
            cout<<arr[i][j]<<" ";
        }
        
        cout<<endl;
    }

    return 0;
}