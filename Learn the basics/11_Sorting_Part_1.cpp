#include<bits/stdc++.h>
using namespace std;

/*
Selection Sort-
{13,46,24,52,20,9} -> {9,13,20,24,46,52}
{9,46,24,52,20,13}
{9,13,24,52,20,46}
{9,13,20,52,24,46}
{9,13,20,24,52,46}
{9,13,20,24,46,52}
*/

void selectionSorting(int arr[],int n){ // Time Complexity - O(n^2)
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }
}

/*
Bubble Sort-
{13,46,24,52,20,9} -> {9,13,20,24,46,52}
{13,24,46,20,9,52}
{13,24,20,9,46,52}
{13,20,9,24,46,52}
{13,9,20,24,46,52}
{9,13,20,24,46,52}
*/

void bubbleSorting(int arr[],int n){ // Time Complexity - O(n^2), Best Case - O(n)
    for(int i=n-1;i>=0;i--){
        int flag=true;
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
        }
        if(flag){
            break;
        }
    }
}

/*
Insertion Sort-
{14,9,15,12,6,8,13} -> {6,8,9,12,13,14,15}
{9,14,15,12,6,8,13}
{9,14,15,12,6,8,13}
{9,12,14,15,6,8,13}
{6,9,12,14,15,8,13}
{6,8,9,12,14,15,13} 
{6,8,9,12,13,14,15}
*/

void insertionSorting(int arr[],int n){ // Time Complexity - O(n^2), Best Case - O(n)
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main(){
    int selectionSort[]={13,46,24,52,20,9};
    int n=sizeof(selectionSort)/sizeof(selectionSort[0]);
    for(int i=0;i<n;i++){
        cout<<selectionSort[i]<<" ";
    }
    cout<<endl;
    selectionSorting(selectionSort,n);
    for(int i=0;i<n;i++){
        cout<<selectionSort[i]<<" ";
    }
    cout<<endl;

    int bubbleSort[]={13,46,24,52,20,9};
    int m=sizeof(bubbleSort)/sizeof(bubbleSort[0]);
    for(int i=0;i<m;i++){
        cout<<bubbleSort[i]<<" ";
    }
    cout<<endl;
    bubbleSorting(bubbleSort,m);
    for(int i=0;i<m;i++){
        cout<<bubbleSort[i]<<" ";
    }
    cout<<endl;

    int insertionSort[]={14,9,15,12,6,8,13};
    int o=sizeof(insertionSort)/sizeof(insertionSort[0]);
    for(int i=0;i<m;i++){
        cout<<insertionSort[i]<<" ";
    }
    cout<<endl;
    insertionSorting(insertionSort,o);
    for(int i=0;i<m;i++){
        cout<<insertionSort[i]<<" ";
    }
    cout<<endl;
}