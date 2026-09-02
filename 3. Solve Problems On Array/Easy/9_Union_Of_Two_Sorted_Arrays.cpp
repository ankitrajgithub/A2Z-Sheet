/*
Union of Two Sorted Arrays

Problem Statement: Given two sorted arrays, arr1, and arr2 of size n and m. Find the union of two sorted 
arrays.
The union of two arrays can be defined as the common and distinct elements in the two arrays.
NOTE: Elements in the union should be in ascending order.

Input:n = 5,m = 5 arr1[] = {1,2,3,4,5}  arr2[] = {2,3,4,4,5}
Output: {1,2,3,4,5}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1
Distnict Elemennts in arr2 are : No distinct elements.
Union of arr1 and arr2 is {1,2,3,4,5}

Input:n = 10,m = 7,arr1[] = {1,2,3,4,5,6,7,8,9,10}arr2[] = {2,3,4,4,5,11,12}
Output: {1,2,3,4,5,6,7,8,9,10,11,12}
Explanation: Common Elements in arr1 and arr2  are:  2,3,4,5
Distnict Elements in arr1 are : 1,6,7,8,9,10
Distnict Elemennts in arr2 are : 11,12
Union of arr1 and arr2 is {1,2,3,4,5,6,7,8,9,10,11,12}
*/

#include<bits/stdc++.h>
using namespace std;

void unionOfTwoSortedArrays(int arr1[],int n,int arr2[],int m){
    set<int> set;
    for(int i=0;i<n;i++){
        set.insert(arr1[i]);
    }
    for(int i=0;i<m;i++){
        set.insert(arr2[i]);
    }
    for(auto el:set){
        cout<<el<<" ";
    }
}

void UnionOfTwoSortedArrays(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    vector<int> temp;
    while(i<n&&j<m){
        if(arr1[i]<=arr2[j]){
            if(temp.size()==0 || temp.back()!=arr1[i]){
                temp.push_back(arr1[i]);
            }
            i++;
        }else{
            if(temp.size()==0 || temp.back()!=arr2[j]){
                temp.push_back(arr2[j]);
            }
            j++;
        }
    }
    while(i<n){
        if(temp.size()==0 || temp.back()!=arr1[i]){
            temp.push_back(arr1[i]);
        }
        i++;
    }
    while(j<m){
        if(temp.size()==0 || temp.back()!=arr2[j]){
            temp.push_back(arr2[j]);
        }
        j++;
    }

    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<" ";
    }
}

int main(){
    int n,m;
    cin>>n;
    int arr1[n];

    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    cin>>m;
    int arr2[m];

    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    // unionOfTwoSortedArrays(arr1,n,arr2,m); Time Complexity=O(nLogn+mLogn+n+m), Space Complexity=O(n+m)

    UnionOfTwoSortedArrays(arr1,n,arr2,m); // Time Complexity=O(n+m), Space Complexity=O(n+m)
}