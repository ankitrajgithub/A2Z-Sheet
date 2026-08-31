#include<bits/stdc++.h>
using namespace std;

int fn(int arr[],int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot && i<=high-1){
            i++;
        }
        while(arr[j]>pivot && j>=low+1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quickSort(int arr[],int low,int high){
    if(low<high){
        int pIndex=fn(arr,low,high);
        quickSort(arr,low,pIndex-1);
        quickSort(arr,pIndex+1,high);
    }
}

/*
Quick Sort-
1. Pick a pivot & place it in the correct place in the sorted array.
a. 1st element in the array.
b. Last element in the array
c. Median of the array.
d. Random element of the array.

2. Smaller on the left and larger on the right.

[4] 6 2 5 7 9 1 3
2 1 3 - [4] - 6 5 7 9
[2] 1 3 - [4] - [6] 5 7 9
1 [2] 3 - [4] - 5 [6] 7 9
1 [2] 3 - [4] - 5 [6] - [7] 9
1 2 3 4 5 6 7 9 
*/

int main(){
    int arr[]={4,6,2,5,7,9,1,3};
    int high=sizeof(arr)/sizeof(arr[0]);
    int low=0;

    for(int i=0;i<high;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    quickSort(arr,low,high-1); // Time Complexity - O(NlogN)

    for(int i=0;i<high;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}