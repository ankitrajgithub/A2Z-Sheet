/*
Two Sum : Check if a pair with given sum exists in Array

Problem Statement: Given an array of integers arr[] and an integer target.
1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, 
return NO.
2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we 
will return {-1, -1}.

Input: N = 5, arr[] = {2,6,5,8,11}, target = 14
Output : YES
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for first variant for second variant output will be : [1,3].

Input: N = 5, arr[] = {2,6,5,8,11}, target = 15
Output : NO.
Explanation: There exist no such two numbers whose sum is equal to the target. 
*/

#include<bits/stdc++.h>
using namespace std;

void twoSum(int arr[],int n,int sum){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum&&i!=j){
                cout<<"Two sums = "<<i<<" "<<j<<endl;
                return;
            }
        }
    }
    cout<<"Two sums = "<<-1<<" "<<-1<<endl;
}

void TwoSum(int arr[],int n,int sum){
    map<long long,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]=i;;
    }
    for(int i=0;i<n;i++){
        int rem=sum-arr[i];
        if(mpp.find(rem)!=mpp.end()){
            cout<<"Two sums = "<<i<<" "<<mpp[rem]<<endl;
            return;
        }
    }
    cout<<"Two sums = "<<-1<<" "<<-1<<endl;
}

void TwoSums(int arr[],int n,int sum){
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        int num=arr[i];
        int moreNeeded=sum-num;
        if(mpp.find(moreNeeded)!=mpp.end()){
            cout<<"Two sums = "<<mpp[moreNeeded]<<" "<<i;
            return;
        }
        mpp[num]=i;
    }
    cout<<"Two sums = "<<-1<<" "<<-1<<endl;
}

void twoSums(int arr[],int n,int sum){
    sort(arr,arr+n);
    int left=0,right=n-1;
    while(left<right){
        if(arr[left]+arr[right]==sum){
            cout<<"Two sums = "<<arr[left]<<" "<<arr[right]<<endl;
            return;
        }else if(arr[left]+arr[right]>sum){
            right--;
        }else{
            left++;
        }
    }
    cout<<"Two sums = "<<-1<<" "<<-1<<endl;
}

int main(){
    int n,sum;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>sum;

    // twoSum(arr,n,sum); Time Complexity=O(n^2) Space Complexity=O(1)

    // TwoSum(arr,n,sum); Time Complexity=O(nlogn+n) Space Complexity=O(n)

    TwoSums(arr,n,sum); // Time Complexity=O(nlogn) Space Complexity=O(n)

    twoSums(arr,n,sum); // Time Complexity=O(n+nlogn) Space Complexity=O(1)
}