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
    cout<<"Updated the array"<<endl;
   for(int i=0; i<n;i++){
   cout<<(arr[i]*arr[i])<<" ";
   
   }
  
}