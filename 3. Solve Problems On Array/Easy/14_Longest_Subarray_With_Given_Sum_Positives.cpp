/*
Longest Subarray with given Sum K(Positives)

Problem Statement: Given an array nums of size n and an integer k, find the length of the longest sub-array 
that sums to k. If no such sub-array exists, return 0.

Example 1:
Input:
nums = [10, 5, 2, 7, 1, 9], k = 15  
Output:
4  
Explanation:
The longest sub-array with a sum equal to 15 is [5, 2, 7, 1], which has a length of 4. This sub-array starts 
at index 1 and ends at index 4, and the sum of its elements (5 + 2 + 7 + 1) equals 15. Therefore, the length 
of this sub-array is 4.

Example 2:
Input:
nums = [-3, 2, 1], k = 6  
Output:
0  
Explanation:
There is no sub-array in the array that sums to 6. Therefore, the output is 0.
*/

#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithGivenSum(int arr[],int n,int sum){
    int longest;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int s=0;
            for(int k=i;k<=j;k++){
                s=s+arr[k];
            }
            if(s==sum){
                longest=max(longest,j-i+1);
            }
        }
    }
    return longest;
}

int LongestSubarrayWithGivenSum(int arr[],int n,int sum){
    int longest=0;
    for(int i=0;i<n;i++){
        int s=0;
        for(int j=i;j<n;j++){
            s=s+arr[j];
            if(s==sum){
                longest=max(longest,j-i+1);
            }
        }
    }
    return longest;
}

int longestSubarrayWithGivenSums(int arr[],int n,int sum){
    map<long long,int> preSumMap;
    long long s=0;
    int maxLen=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
        if(s==sum){
            maxLen=max(maxLen,i+1);
        }
        long long rem=s-sum;
        if(preSumMap.find(rem)!=preSumMap.end()){
            int len=i-preSumMap[rem];
            maxLen=max(maxLen,len);
        }
        if(preSumMap.find(s)==preSumMap.end()){
            preSumMap[s]=i;
        }
    }
    return maxLen;
}

int main(){
    int n,sum;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>sum;

    // int ans=longestSubarrayWithGivenSum(arr,n,sum); Time Complexity=O(n^3) Space Complexity=O(1)

    // int ans=LongestSubarrayWithGivenSum(arr,n,sum); Time Complexity=O(n^2) Space Complexity=O(1)

    int ans=longestSubarrayWithGivenSums(arr,n,sum); // Time Complexity=O(nlogn) Space Complexity=O(n) This code is correct for only positives greater than 0

    cout<<"Longest Subarray with given Sum - "<<ans<<endl;
}