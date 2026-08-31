#include<bits/stdc++.h>
using namespace std;

/*
Merge Sort-
{3,1,2,4,1,5,2,6,4} - {1,1,2,2,3,4,4,5,6}
{3,1,2,4,1}-{5,2,6,4}
{3,1,2}-{4,1}-{5,2}-{6,4}
{3,1}-{2}-{4}-{1}-{5}-{2}-{6}-{4}
{3}-{1}-{2}-{4}-{1}-{5}-{2}-{6}-{4}
{1,3}-{2}-{1,4}-{2,5}-{4,6}
{1,2,3}-{1,4}-{2,4,5,6}
{1,1,2,3,4}-{2,4,5,6}
{1,1,2,2,3,4,4,5,6}
*/

void merge(vector<int> arr,int low,int mid,int high){
    vector<int> temp;
    // [low....mid] [mid+1....high]
    int left=low,right=mid+1;
    while(left<=mid&&right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergeSorting(vector<int> &arr,int low,int high){
    if(low==high){
        return;
    }
    int mid=(low+high)/2;
    mergeSorting(arr,low,mid);
    mergeSorting(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    vector<int> mergeSort={3,1,2,4,1,5,2,6,4};
    int low=0;
    int high=mergeSort.size();
    for(int i=0;i<high;i++){
        cout<<mergeSort[i]<<" ";
    }
    cout<<endl;
    mergeSorting(mergeSort,low,high-1); // Time Complexity - O(log base2 N)
    for(int i=0;i<high;i++){
        cout<<mergeSort[i]<<" ";
    }
    cout<<endl;
}