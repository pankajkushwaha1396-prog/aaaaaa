#include<iostream>
using namespace std;
// int binarySearch(int arr[], int n, int target) {
//     int low = 0, high = n - 1;
//     while (low <= high) {
//         int mid = low + (high - low) / 2; 
//         if (arr[mid] == target) return mid;       
//         else if (arr[mid] < target) low = mid + 1; 
//         else high = mid - 1;         
//     }
//     return -1; 
// }
// int main(){
//     int arr[]= {1,2,3,4,5};
//    int n = sizeof(arr)/sizeof(arr[0]);
//    int target = 5;
//    int result = binarySearch(arr, n, target);
//    if (result != -1)
//         cout << "Element found at index " << result;
//     else
//         cout << "Element not found";
//     return 0;
// }


// int BinarySearch(int arr[], int n, int key ){
//     int start =0, end =n-1, mid;
//     while(start<=end){
//         mid = (start+end)/2;
//         if(arr[mid]==key)
//         return mid;

//         else if (arr[mid]<key)
//         start = mid+1;

//         else
//         end = mid-1;
//     }
//     return -1;
// }
// int main(){
//     int arr[1000];
//     int n;
//     cout<<"Enter the number of element in arrary";
//     cin>>n;
//     cout<<"Enter the element";
//     for(int i =0; i<n;i++)
//     cin>>arr[i];

//     int key ;
//     cout<<"Enter the key: ";
//     cin>>key;

//     cout<<BinarySearch(arr, n, key);
//     return 0;
// }


int BinarySearch(int arr[], int n, int key ){
    int start =0, end =n-1, mid;
    while(start<=end){
        mid = (start+end)/2;
        if(arr[mid]==key)
        return mid;

        else if (arr[mid]<key)
        start = mid+1;

        else
        end = mid-1;
    }
    return -1;
}
int main(){
    int arr[1000];
    int n;
    cout<<"Enter the number of element in arrary";
    cin>>n;
    cout<<"Enter the element";
    for(int i =0; i<n;i++)
    cin>>arr[i];

    int key ;
    cout<<"Enter the key: ";
    cin>>key;

    cout<<BinarySearch(arr, n, key);
    return 0;
}