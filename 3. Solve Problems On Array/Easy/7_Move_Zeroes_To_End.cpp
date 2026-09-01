/*
Move all Zeros to the end of the array

Problem Statement: You are given an array of integers, your task is to move all the zeros in the array to 
the end of the array and move non-negative integers to the front by maintaining their order.

Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
Explanation: All the zeros are moved to the end and non-negative integers are moved to front by maintaining
order

Input : 1,2,0,1,0,4,0
Output: 1,2,1,4,0,0,0
Explanation : All the zeros are moved to the end and non-negative integers are moved to front by maintaining order
*/

#include<bits/stdc++.h>
using namespace std;

void moveZeroesToEnd(int arr[],int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }

    for(int i=temp.size();i<n;i++){
        arr[i]=0;
    }
}

void MoveZeroesToEnd(int arr[],int n){
    int j=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    for(int i=j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    // moveZeroesToEnd(arr,n);  Time Complexity-O(N+n+(N-n))=O(2N) Space Complexity-O(N)

    MoveZeroesToEnd(arr,n); // Time Complexity=O(n+(N-n))=O(N) Space Complexity-O(1)

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}