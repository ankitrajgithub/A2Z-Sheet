/*
Kadane's Algorithm : Maximum Subarray Sum in an Array

Problem Statement: Given an integer array nums, find the subarray with the largest sum and return the sum of
the elements present in that subarray.
A subarray is a contiguous non-empty sequence of elements within an array.

Example 1:
Input:
nums = [2, 3, 5, -2, 7, -4]  
Output:
15  
Explanation:
The subarray from index 0 to index 4 has the largest sum = 15, which is the maximum sum of any contiguous 
subarray.

Example 2:
Input:
nums = [-2, -3, -7, -2, -10, -4]  
Output:
-2  
Explanation:
The largest sum is -2, which comes from taking the element at index 0 or index 3 as the subarray. Since all 
numbers are negative, the subarray with the least negative number gives the largest sum.
*/

#include<bits/stdc++.h>
using namespace std;

int kadanes_Algorithm(int arr[],int n){
    int maxEl=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum=sum+arr[k];
            }
            maxEl=max(maxEl,sum);
        }
    }
    return maxEl;
}

int Kadanes_Algorithm(int arr[],int n){
    int maxEl=INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+arr[j];
            maxEl=max(maxEl,sum);
        }
    }
    return maxEl;
}

int kadanes_algorithm(int arr[],int n){
    int maxEl=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        maxEl=max(maxEl,sum);
        if(sum<0){
            sum=0;
        }
    }
    return maxEl;
}

int kadanes_Algorithm_Follow_Up(int arr[],int n){
    int maxEl=INT_MIN;
    int sum=0;
    int ansStart=-1,ansEnd=-1;
    int start;
    for(int i=0;i<n;i++){
        if(sum==0){
            start=i;
        }
        sum=sum+arr[i];
        if(sum>maxEl){
            maxEl=sum;
            ansStart=start;
            ansEnd=i;
        }
        if(sum<0){
            sum=0;
        }
    }
    cout<<"Start and End Index are = "<<ansStart<<" "<<ansEnd<<endl;
    return maxEl;
}

int main(){
    int n,sum;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  

    // int ans=kadanes_Algorithm(arr,n); Time Complexity-O(n^3) Space Complexity-O(1)

    // int ans=Kadanes_Algorithm(arr,n); Time Complexity-O(n^2) Space Complexity-O(1)

    // int ans=kadanes_algorithm(arr,n); Time Complexity-O(n) Space Complexity-O(1)

    int ans=kadanes_Algorithm_Follow_Up(arr,n);

    cout<<"Maximum Subarray Sum = "<<ans<<endl;
}