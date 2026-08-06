#include<bits/stdc++.h>
using namespace std;

//Print name 5 times
void name(int i,int n){
    if(i>n){
        cout<<endl;
        return;
    }
    cout<<"Ankit Raj"<<" ";
    name(i+1,n);
}

//Print linearly from 1 to N 
void print1ToN(int i,int n){
    if(i>n){
        cout<<endl;
        return;
    }
    cout<<i<<" ";
    print1ToN(i+1,n);
}

//Print from N to 1
void printNTo1(int i,int n){
    if(i<1){
        cout<<endl;
        return;
    }
    cout<<i<<" ";
    printNTo1(i-1,n);
}

// Print linearly from 1 to N (but by Backtracking)
void print1ToNBacktracking(int i,int n){
    if(i<1){
        return;
    }
    print1ToNBacktracking(i-1,n);
    cout<<i<<" ";
}

//Print from N to 1 (By Backtracking)
void printNTo1Backtracking(int i,int n){
    if(i>n){
        cout<<endl;
        return;
    }
    printNTo1Backtracking(i+1,n);
    cout<<i<<" ";
}

int main(){
    int n;
    cin>>n;

    name(1,n);

    print1ToN(1,n);

    printNTo1(n,n);

    print1ToNBacktracking(n,n);

    printNTo1Backtracking(1,n);
    
}