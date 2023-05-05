#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void selsort(int arr[],int n){
//     int i,j,min_idx;
//     for(int i=0;i<n-1;i++){
//         min_idx = i;
//         for(j=i+1;j<n;j++){
//             if(arr[j]<arr[min_idx]){
//             min_idx = j;
//             }
//         }
//         swap(arr[min_idx],arr[i]);
//     }
//     cout<<"elements after sorted"<<endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
    
    
// }

// void bubblesort(int arr[],int n){
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i-1;j++){
//             if(arr[j]>arr[j+1]){
//                 swap(arr[j],arr[j+1]);
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout<<arr[i];
//     }
// }

// void insertionSort(int arr[], int n)
// {
//     int i, key, j;
//     for (i = 1; i < n; i++)
//     {
//         key = arr[i];
//         j = i - 1;
 
//         while (j >= 0 && arr[j] > key)
//         {
//             arr[j + 1] = arr[j];
//             j = j - 1;
//         }
//         arr[j + 1] = key;
//     }
// }
 
int main(){
    int arr[] = {64,25,12,22,11};
    int n =5; 
//   selsort(arr,n);
    // bubblesort(arr,n);
    // insertionSort(arr,n);
}