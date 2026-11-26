#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;
    
    int arr[n];
    cout<<"Enter th number"<<endl;
    

    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
   for(int i=0; i<n;i++){
    if(arr[i] < 0){
        arr[i] = 0;
    }
   }
   cout<<"Updated the array"<<endl;
   for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
   }
}