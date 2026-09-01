/*
Rotate array by K elements

Problem Statement: Given an array of integers, rotating array of elements by k elements either left or right.

Input : nums = [1, 2, 3, 4, 5, 6, 7], k = 2, right
Output : [6, 7, 1, 2, 3, 4, 5]
Explanation : rotate 1 step to the right: [7, 1, 2, 3, 4, 5, 6]
rotate 2 steps to the right: [6, 7, 1, 2, 3, 4, 5] 

Input : nums = [1, 2, 3, 4, 5, 6], k=2, left
Output : [3, 4, 5, 6, 1, 2]
Explanation :rotate 1 step to the left: [2, 3, 4, 5, 6, 1]
rotate 2 steps to the left: [3, 4, 5, 6, 1, 2]
*/

#include<bits/stdc++.h>
using namespace std;

void rotateArrayByKEelements(int arr[],int n,int x){
    x=x%n;
    int temp[x];
    for(int i=0;i<x;i++){
        temp[i]=arr[i];
    }
    for(int i=x;i<n;i++){
        arr[i-x]=arr[i];
    }
    for(int i=n-x;i<n;i++){
        arr[i]=temp[i-(n-x)];
    }
}

void RotateArrayByKEelements(int arr[],int n,int x){
    reverse(arr,arr+x);
    reverse(arr+x,arr+n);
    reverse(arr,arr+n);
}

int main(){
    int n,x;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cin>>x;

    // rotateArrayByKEelements(arr,n,x); Time Complexity-O(X+(N-X)+X)=O(N+X) Space Complexity-O(X)

    RotateArrayByKEelements(arr,n,x); // O(X+(N-X)+N)=O(2N) Space Complexity-O(1)

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}