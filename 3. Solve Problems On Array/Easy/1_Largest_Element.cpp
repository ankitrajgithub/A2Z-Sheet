/*
Find the Largest element in an array

Problem Statement: Given an array, we have to find the largest element in the array.

Example 1:

Input:
arr[] = {2, 5, 1, 3, 0}  

Output:
5  

Explanation:
5 is the largest element in the array.

Example 2:

Input:
arr[] = {8, 10, 5, 7, 9}  

Output:
10  

Explanation: 
10 is the largest element in the array.
*/

// Max Size of array is 10^6 in int main() and 10^7 globally.
// Initializing array in int main() assigns garbage value to it whereas globally 0 is assigned. 

#include<bits/stdc++.h>
using namespace std;

int largestElement(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    return largest;
}

int main(){
    int n; 
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int largest=largestElement(arr,n);

    cout<<"Largest Element -> "<<largest;
}