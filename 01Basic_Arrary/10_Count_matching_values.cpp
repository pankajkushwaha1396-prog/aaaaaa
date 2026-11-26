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
    int target;
    cout<<"Enter the count value target"<<endl;
    cin>>target;
    int count = 0;
    for(int i=0;i<n;i++){
    if( target == arr[i]){
        count ++;
    }
}
cout<<"target the valve :"<<target<<endl;
cout<<"Count the value :"<<count<<endl;
}