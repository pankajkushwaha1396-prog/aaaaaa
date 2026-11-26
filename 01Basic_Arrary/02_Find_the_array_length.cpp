#include<iostream>
using namespace std; 
int main(){
    int n;
    cout<<"Enter the size : "<<endl;
    cin>>n;

    int arr [n];
    cout<<"Enter the arrary eleent : "<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    } 
    for(int i=0; i<n ;i++){
        cout<<arr[i]<<" ";
       
    }
    cout<<endl;
cout<<sizeof(arr)/sizeof(arr[0]);
}