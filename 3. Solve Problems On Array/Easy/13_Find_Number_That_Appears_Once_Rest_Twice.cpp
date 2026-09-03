/*
Find the number that appears once, and the other numbers twice

Problem Statement: Given a non-empty array of integers arr, every element appears twice except for one. 
Find that single one.

Example 1:
Input Format: arr[] = {2,2,1}
Result: 1
Explanation: In this array, only the element 1 appear once and so it is the answer.


Example 2:
Input Format: arr[] = {4,1,2,1,2}
Result: 4
Explanation: In this array, only element 4 appear once and the other elements appear twice. So, 4 is the 
answer.
*/

#include<bits/stdc++.h>
using namespace std;

int FindNumberThatAppearsOnceRestTwice(int arr[],int n){
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]&&i!=j){
                flag=1;
            }
        }
        if(flag==0){
            return arr[i];
            break;
        }
    }
}

int FindNumberThatAppearOnceRestTwice(int arr[],int n){
    int maxElement=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxElement){
            maxElement=arr[i];
        }
        int hash[maxElement+1]={0};
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=1;i<maxElement+1;i++){
            if(hash[i]==1){
                return i;
            }
        }
    }
}

int FindNumbersThatAppearOnceRestTwice(int arr[],int n){
    map<long long,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto el:mpp){
        if(el.second==1){
            return el.first;
        }
    }
}


int findNumberThatAppearsOnceRestTwice(int arr[],int n){
    int num;
    for(int i=0;i<n;i++){
        num=num^arr[i];
    }
    return num;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // int ans=FindNumberThatAppearsOnceRestTwice(arr,n); Time Complexity=O(n^2) Space Complexity=O(1)

    // int ans=FindNumberThatAppearOnceRestTwice(arr,n); Time Complexity=O(n+n+n)=O(3n) Space Complexity=O(maxElement)

    // int ans=FindNumbersThatAppearOnceRestTwice(arr,n); Time Complexity=O(nlogm+n/2+1)-(For Unordered Map Best case O(n) and Worst case O(n^2)) Space Complexity-O(n/2+1)

    int ans=findNumberThatAppearsOnceRestTwice(arr,n); // Time Complexity=O(n) Space Complexity=O(1)

    cout<<"Number that appears once rest twice = "<<ans;
}