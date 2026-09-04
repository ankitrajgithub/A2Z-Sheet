/*
Find the Majority Element that occurs more than N/2 times

Problem Statement: Given an integer array nums of size n, return the majority element of the array.
The majority element of an array is an element that appears more than n/2 times in the array. The array is 
guaranteed to have a majority element.

Example 1:
Input:
nums = [7, 0, 0, 1, 7, 7, 2, 7, 7]  
Output:
7  
Explanation:
The number 7 appears 5 times in the 9-sized array, making it the most frequent element.

Example 2:
Input:
nums = [1, 1, 1, 2, 1, 2]  
Output:
1  
Explanation:
The number 1 appears 4 times in the 6-sized array, making it the most frequent element.
*/

#include<bits/stdc++.h>
using namespace std;

int findElementThatOccursMoreThanNBy2Times(int arr[],int n){ 
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
        }
        if(count>n/2){
            return arr[i];
        }
    }
    return -1;
}

int FindElementsThatOccursMoreThanNBy2Times(int arr[],int n){ 
    map<long long,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    for(auto el:mpp){
        if(el.second>n/2){
            return el.first;
        }
    }
    return -1;
}

int FindElementThatOccursMoreThanNBy2Times(int arr[],int n){ 
    int count=0;
    int el;
    for(int i=0;i<n;i++){
        if(count==0){
            el=arr[i];
            count++;
        }else if(arr[i]==el){
            count++;
        }else{
            count--;
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==el){
            cnt++;
        }
    }
    if(cnt>n/2){
        return el;
    }
    return -1;
}


int main(){
    int n,sum;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }  

    // int ans=findElementThatOccursMoreThanNBy2Times(arr,n); Time Complexity=O(n^2)

    // int ans=FindElementsThatOccursMoreThanNBy2Times(arr,n); Time Complexity=O(nlogn+n) Space Complexity=O(n)

    int ans=FindElementThatOccursMoreThanNBy2Times(arr,n); // Time Complexity=O(2n) Space Complexity=O(1)

    cout<<"Element that occurs more than N/2 time = "<<ans<<endl;
}