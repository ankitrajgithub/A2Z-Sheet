/*
Remove Duplicates in-place from Sorted Array

Problem Statement: Given an integer array sorted in non-decreasing order, remove the duplicates in place 
such that each unique element appears only once. The relative order of the elements should be kept the same.

If there are k elements after removing the duplicates, then the first k elements of the array should hold 
the final result. It doesn't matter what you leave beyond the first k elements.

Input: arr[]=[1,1,2,2,2,3,3]
Output: [1,2,3,_,_,_,_]
Explanation: Total number of unique elements are 3, i.e[1,2,3] and Therefore return 3 after assigning 
[1,2,3] in the beginning of the array.

Input: arr[]=[1,1,1,2,2,3,3,3,3,4,4]
Output: [1,2,3,4,_,_,_,_,_,_,_]
Explanation: Total number of unique elements are 4, i.e[1,2,3,4] and Therefore return 4 after assigning 
[1,2,3,4] in the beginning of the array.
*/

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(int arr[],int n){
    set<int> set;
    for(int i=0;i<n;i++){
        set.insert(arr[i]);
    }
    int index=0;
    for(auto el:set){
        arr[index]=el;
        index++;
    }
}

void RemoveDuplicates(int arr[],int n){
    int i=0;
    for(int j=1;j<n;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    removeDuplicates(arr,n); // Time Complexity - O(NlogN+N)

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int m;
    cin>>m;
    int array[m];

    for(int i=0;i<m;i++){
        cin>>array[i];
    }

    RemoveDuplicates(array,m); // Time Complexity - O(N)

    for(int i=0;i<m;i++){
        cout<<array[i]<<" ";
    }
}