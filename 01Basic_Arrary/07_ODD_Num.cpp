#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter the size"<<endl;
    cin>>n;

    int arr[n];
    cout<<"Enter the number"<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"odd Number :";
    for(int i=0;i<n;i++){
        if(arr[i] % 2 != 0){
            cout<<arr[i]<<" ";
        }
        
    }
    
}