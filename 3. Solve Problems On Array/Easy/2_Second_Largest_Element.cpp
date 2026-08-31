/*
Find Second Smallest and Second Largest Element in an array

Problem Statement: Given an array, find the second smallest and second largest element in the array. Print ‘-1’ in the event that either of them doesn’t exist.

Example 1:

Input:
[1, 2, 4, 7, 7, 5]  

Output:
Second Smallest : 2  
Second Largest : 5 

Explanation:
The elements are sorted as 1, 2, 4, 5, 7, 7.  
Hence, the second smallest element is 2, and the second largest element is 5.

Example 2:

Input:
[1]  

Output:
Second Smallest : -1  
Second Largest : -1  

Explanation:
Since there is only one element in the array, it is both the largest and smallest element.  
Therefore, there is no second smallest or second largest element present.
*/

#include<bits/stdc++.h>
using namespace std;

int secondLargestElement(int arr[],int n){
    sort(arr,arr+n);
    int largest=arr[n-1];
    int secondLargest=-1;
    for(int i=n-2;i>=0;i--){
        if(arr[i]!=largest){
            secondLargest=arr[i];
            break;
        }
    }
    return secondLargest;
}

int SecondLargestElement(int arr[],int n){
    int largest=arr[0];
    int secondLargest=-1;
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            secondLargest=largest;
            largest=arr[i];
        }else if(arr[i]>secondLargest && arr[i]<largest){
            secondLargest=arr[i];
        }
    }
    return secondLargest;
}

int SecondSmallestElement(int arr[],int n){
    int smallest=arr[0];
    int secondSmallest=INT_MAX;
    for(int i=1;i<n;i++){
        if(arr[i]<smallest){
            secondSmallest=smallest;
            smallest=arr[i];
        }else if(arr[i]<secondSmallest && arr[i]>smallest){
            secondSmallest=arr[i];
        }
    }
    return secondSmallest;
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int secondLargest=secondLargestElement(arr,n);

    cout<<"Second Largest -> "<<secondLargest<<endl;

    int m;
    cin>>m;
    int array[m];

    for(int i=0;i<m;i++){
        cin>>array[i];
    }

    int SecondLargest=SecondLargestElement(array,m); // Time Complexity - O(NlogN)

    cout<<"Second Largest -> "<<SecondLargest<<endl;

    int SecondSmallest=SecondSmallestElement(array,m); // Time Complexity - O(N)

    cout<<"Second Largest -> "<<SecondSmallest;
}