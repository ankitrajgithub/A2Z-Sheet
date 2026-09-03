/*
Length of the longest subarray with zero Sum

Problem Statement: Given an array containing both positive and negative integers, we have to find the length 
of the longest subarray with the sum of all elements equal to zero.

Example 1:
Input:
N = 6, array[] = {9, -3, 3, -1, 6, -5}  
Result:
5  
Explanation:
The following subarrays sum to zero:
- {-3, 3}
- {-1, 6, -5}
- {-3, 3, -1, 6, -5}
The length of the longest subarray with sum zero is 5.

Example 2:
Input:
N = 8, array[] = {6, -2, 2, -8, 1, 7, 4, -10}  
Result:
8  
Explanation:
Subarrays with sum zero:
- {-2, 2}
- {-8, 1, 7}
- {-2, 2, -8, 1, 7}
- {6, -2, 2, -8, 1, 7, 4, -10}
The length of the longest subarray with sum zero is 8.
*/

#include<bits/stdc++.h>
using namespace std;

int longestSubarrayWithZeroSum(int arr[],int n,int sum){
    int left=0,right=0;
    int maxLen=0;
    long long s=arr[0];
    while(right<n){
        while(left<=right&&s>sum){
            s-=arr[left];
            left++;
        }
        if(s==sum){
            maxLen=max(maxLen,right-left+1);
        }
        right++;
        if(right<n){
            s+=arr[right];
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

    int ans=longestSubarrayWithZeroSum(arr,n,sum); // Time Complexity=O(2n) Space Complexity=O(1)

    cout<<"Longest Subarray With Zero Sum = "<<ans<<endl;

}