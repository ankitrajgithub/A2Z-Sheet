/*
Find the Missing Number

Given an array arr[] of size n-1 with distinct integers in the range of [1, n]. This array represents a 
permutation of the integers from 1 to n with one element missing. Find the missing element in the array.

Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
Output: 6
Explanation: All the numbers from 1 to 8 are present except 6.

Input: arr[] = [1, 2, 3, 5]
Output: 4
Explanation: Here the size of the array is 4, so the range will be [1, 5]. The missing number between 1 to 5 is 4
*/

#include<bits/stdc++.h>
using namespace std;

int findMissingNumber(int arr[],int n){
    for(int i=1;i<=n;i++){
        int flag=0;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                flag=1;
                break;
            }
        }
        if(flag==0){
            return i;
        }
    }
}

int FindMissingNumber(int arr[],int n){
    int hash[n+1]={0};
    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;
    }
    for(int i=1;i<n;i++){
        if(hash[i]==0){
            return i;
        }
    }
}

int FindMissingNumbers(int arr[],int n){
    int sum=(n*(n+1))/2;
    for(int i=0;i<n-1;i++){
        sum=sum-arr[i];
    }
    return sum;
}

int FindMissingNumberz(int arr[],int n){
    // XOR - 2^2=0
    int xor1=0,xor2=0;
    for(int i=0;i<n-1;i++){
        xor1=xor1^(i+1);
        xor2=xor2^arr[i];
    }
    xor1=xor1^n;
    return xor1^xor2;
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }

    // int ans=findMissingNumber(arr,n);  Time Complexity=O(n^2) Space Complexity=O(1)

    // int ans=FindMissingNumber(arr,n); Time Complexity=O(n)+O(n)=O(2n) Space Complexity=O(n)

    // int ans=FindMissingNumbers(arr,n); Time Complexity=O(n) Space Complexity=O(1)

    int ans=FindMissingNumberz(arr,n); // Time Complexity=O(n) Space Complexity=O(1)

    cout<<"Missing Number = "<<ans;
}