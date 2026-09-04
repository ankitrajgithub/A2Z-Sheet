/*
Sort an array of 0s, 1s and 2s

Problem Statement: Given an array nums consisting of only 0, 1, or 2. Sort the array in non-decreasing order.
The sorting must be done in-place, without making a copy of the original array.

Input: nums = [1, 0, 2, 1, 0]
Output: [0, 0, 1, 1, 2]
Explanation: The nums array in sorted order has 2 zeroes, 2 ones and 1 two

Input: nums = [0, 0, 1, 1, 1]
Output: [0, 0, 1, 1, 1]
Explanation: The nums array in sorted order has 2 zeroes, 3 ones and zero twos.
*/

#include<bits/stdc++.h>
using namespace std;

void SortArrayOf0s1sAnd2s(int arr[],int n){
    sort(arr,arr+n);
}

void sortArrayOf0s1sand2s(int arr[],int n){
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count0++;
        }else if(arr[i]==1){
            count1++;
        }else{
            count2++;
        }
    }
    for(int i=0;i<count0;i++){
        arr[i]=0;
    }
    for(int i=count0;i<count0+count1;i++){
        arr[i]=1;
    }
    for(int i=count0+count1;i<n;i++){
        arr[i]=2;
    }
}

void sortArrayOf0s1sAnd2s(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

int main(){
    int n,sum;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // SortArrayOf0s1sAnd2s(arr,n); Time Complexity-O(nlogn) Space Complexity-O(1)

    // sortArrayOf0s1sand2s(arr,n); Time Complexity-O(2n) Space Complexity-O(1)

    sortArrayOf0s1sAnd2s(arr,n); // Time Complexity-O(n) Space Complexity-O(1)

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}