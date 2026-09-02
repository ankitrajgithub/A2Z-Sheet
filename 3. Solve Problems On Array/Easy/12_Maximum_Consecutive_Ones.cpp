/*
Count Maximum Consecutive One's in the array

Problem Statement: Given an array that contains only 1 and 0 return the count of maximum consecutive ones 
in the array.

Example 1:
Input: prices = {1, 1, 0, 1, 1, 1}
Output: 3
Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

Example 2:
Input: prices = {1, 0, 1, 1, 0, 1} 
Output: 2
Explanation: There are two consecutive 1's in the array.
*/

#include<bits/stdc++.h>
using namespace std;

int maximumConsecutiveOnes(int arr[],int n){
    int count=0;
    int maxCount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxCount=max(count,maxCount);
        }else{
            count=0;
        }
    }
    return maxCount;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=maximumConsecutiveOnes(arr,n);

    cout<<"Maximum Consecutive Ones = "<<ans;
}