// Hashing - Pre-storing / Fetching 
// int arr[10^6] , bool arr[10^7] -> Inside main
// int arr[10^7] , bool arr[10^8] -> Globally

#include<bits/stdc++.h>
using namespace std;



int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int hash[13]={0};

    for(auto it:arr){
        hash[it]++;
    }

    int q;
    cin>>q;

    while(q--){
        int number;
        cin>>number;
        cout<<hash[number]<<endl;
    }

    string s;
    cin>>s;
    int a=s.size();

    int array[26]={0}; // int array[256]={0}, if it doesn't specify if character is uppercase.

    for(int i=0;i<a;i++){
        array[s[i]-'a']++;
    }

    cin>>q;

    while(q--){
        char ch;
        cin>>ch;
        int a=ch-'a';
        cout<<array[a]<<endl;
    }

    map<int,int> mpp1;
    // Storing and fetching in Map takes O(logN)
    unordered_map<char,int> mpp2;
    // In unordered_map average and best time complexity is O(1) and worst is O(N)

    for(int i=0;i<n;i++){
        mpp1[arr[i]]++;
    }

    for(auto it:mpp1){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    q;
    cin>>q;

    while(q--){
        int number;
        cin>>number;
        cout<<mpp1[number]<<endl;
    }

    for(int i=0;i<s.size();i++){
        mpp2[s[i]]++;
    }

    for(auto it:mpp2){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    q;
    cin>>q;

    while(q--){
        int number;
        cin>>number;
        cout<<mpp1[number]<<endl;
    }
}

/* 
Hashing :-
-> Division Method
-> Folding Method
-> Mid Square Method 
*/