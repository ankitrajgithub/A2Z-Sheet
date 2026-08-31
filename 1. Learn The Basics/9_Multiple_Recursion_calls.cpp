#include<bits/stdc++.h>
using namespace std;

// Fibonacci number using multiple recursion calls
int f(int n){ // O(2^n)
    if(n<=1){
        return n;
    }
    int last=f(n-1);
    int s_last=f(n-2);
    return last+s_last; // f(n)=f(n-1)+f(n-2)
}

int main(){
    int n;
    cin>>n;

    int a=f(n);
    cout<<a<<endl;

}