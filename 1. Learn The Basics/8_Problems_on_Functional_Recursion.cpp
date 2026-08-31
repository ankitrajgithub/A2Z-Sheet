#include<bits/stdc++.h>
using namespace std;

// Reverse an array using Recursion
void swapArray(int start,int end,int arr[]){
    if(end<=start){
        return;
    }
    swap(arr[end],arr[start]);
    swapArray(start+1,end-1,arr);
}

void swaparray(int arr[],int i,int n){
    if(i>=n/2){
        return;
    }
    swap(arr[i],arr[n-i-1]);
    swaparray(arr,i+1,n);
}

// Check if a string is palindrome using Palindrome
bool checkPalindrome(string &name, int start, int end){
    if(start>=end){
        return true;
    }

    if(name[start]!=name[end]){
        return false;
    }

    checkPalindrome(name, start+1,end-1);
}

bool checkpalindrome(int i,string &name){
    if(i>=name.size()/2){
        return true;
    }
    if(name[i]!=name[name.size()-i-1]){
        return false;
    }
    
    checkpalindrome(i+1,name);
}


int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    swapArray(0,n-1,arr);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    swaparray(arr,0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    string name;
    cin>>name;

    bool checked=checkPalindrome(name,0,name.size()-1);

    if(checked){
        cout<<name<<" is a Palindrome."<<endl;
    }else{
        cout<<name<<" is not a Palindrome."<<endl;
    }

    checked=checkpalindrome(0,name);

    if(checked){
        cout<<name<<" is a Palindrome."<<endl;
    }else{
        cout<<name<<" is not a Palindrome."<<endl;
    }
}