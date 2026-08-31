#include<bits/stdc++.h>
using namespace std;

// Sum of first N numbers - Parameterised Way
void sums(int i,int sum){
    if(i<1){
        cout<<sum<<endl;
        return;
    }

    sums(i-1,sum+i);
}

// Sum of first N numbers - Functional Way
int sumss(int n){
    if(n==0){
        return 0;
    }
    return n+sumss(n-1);
}

// Factorial of a number
int factorial(int n){
    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    sums(n,0);

    int sum=sumss(n);
    cout<<sum<<endl;
}