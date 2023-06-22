#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> arr;
     int x;
    cout<<"enter target element ";
    cin>>x;

    cout<<"enter array size ";
    int n;
    cin>>n;
    
    cout<<"enter array element "<<endl;
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        arr.push_back(q);
    
    }
  

    // int n=arr.size()-1;
    cout<<endl;


    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==x){
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}