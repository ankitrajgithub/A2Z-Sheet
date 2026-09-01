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

void rotateArrayByKEelements(int arr[],int n){

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    rotateArrayByKEelements(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}