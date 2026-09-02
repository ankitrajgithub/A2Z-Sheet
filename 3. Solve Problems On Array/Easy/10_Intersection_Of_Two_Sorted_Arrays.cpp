#include<bits/stdc++.h>
using namespace std;

void intersectionOfTwoSortedArrays(int arr1[],int n,int arr2[],int m){
    int visited[m]={0};
    vector<int> intersection;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j] && visited[j]==0){
                intersection.push_back(arr1[i]);
                visited[j]=1;
                break;
            }
            if(arr2[j]>arr1[i]){
                break;
            }
        }
    }

    for(int i=0;i<intersection.size();i++){
        cout<<intersection[i]<<" ";
    }
}

void IntersectionOfTwoSortedArrays(int arr1[],int n,int arr2[],int m){
    int i=0,j=0;
    vector<int> temp;

    while(i<n&&j<m){
        if(arr1[i]==arr2[j]){
            temp.push_back(arr1[i]);
            i++;
            j++;
        }else if(arr1[i]>arr2[j]){
            j++;
        }else{
            i++;
        }
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

    // intersectionOfTwoSortedArrays(arr1,n,arr2,m); Time Complexity=O(n*m), Space Complexity=O(n+m)

    IntersectionOfTwoSortedArrays(arr1,n,arr2,m); // Time Complexity=O(n+m), Space Complexity=O(n+m)
}