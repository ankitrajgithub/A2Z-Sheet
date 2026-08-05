#include<bits/stdc++.h>
using namespace std;

int myPow(int num,int pow){
    int ans=1;
    for(int i=0;i<pow;i++){
        ans=ans*num;
    }
    return ans;
}

int main(){
    // COUNT DIGITS
    int n;
    cin>>n;
    int cnt=0;
    //cnt=(int)log10(n)+1;

    while(n>0){ // Time Complexity - O(log10(n))
        cnt=cnt+1;
        n=n/10;
    }

    cout<<"No. of digits : "<<cnt<<endl;

    // REVERSE A NUMBER
    int a;
    cin>>a;
    int rev=0;

    while(a>0){
        int lastdigit=a%10;
        rev=rev*10+lastdigit;
        a=a/10;
    }

    cout<<"Reverse : "<<rev<<endl;

    // PALINDROME NUMBER
    int b;
    cin>>b;
    int ogNum=b;
    int revNum=0;

    while(b>0){
        int lastDigit=b%10;
        revNum=revNum*10+lastDigit;
        b=b/10;
    }
    if(ogNum==revNum){
        cout<<ogNum<<" is a Palindrome Number"<<endl;
    }else{
        cout<<ogNum<<" is not a Palindrome Number"<<endl;
    }

    int arm;
    cin>>arm;
    int count=0,ogArm=arm,copyArm=0;

    while(arm>0){
        count=count+1;
        arm=arm/10;
    }

    arm=ogArm;
    while(arm>0){
        int lastDigit=arm%10;
        copyArm=copyArm+myPow(lastDigit,count);
        arm=arm/10;
    }

    if(ogArm==copyArm){
        cout<<ogArm<<" is an Armstrong Number"<<endl;
    }else{
        cout<<ogArm<<" is not an Armstrong Number"<<endl;   
    }

    // PRINT ALL DIVISORS
    int div;
    cin>>div;

    cout<<"Divisors of "<<div<<" are : ";
    for(int i=1;i<=div;i++){
        if(div%i==0){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    cout<<"Divisors of "<<div<<" are : ";
    vector<int> ls;
    for(int i=1;i<=sqrt(div);i++){ // or i*i<=div
        if(div%i==0){
            ls.push_back(i);
            if(div/i!=i){
                ls.push_back(div/i);
            }
        }
    }
    sort(ls.begin(),ls.end()); // O(n logn)
    for(auto in:ls){
        cout<<in<<" ";
    }
    cout<<endl;

    // CHECK FOR PRIME
    int p;
    cin>>p;

    bool prime=true;
    for(int i=2;i*i<p;i++){
        if(p%i==0){
            prime=false;
        }
    }
    if(prime){
        cout<<p<<" is a Prime Number"<<endl;
    }else{
        cout<<p<<" is not a Prime Number"<<endl;
    }

    //Greatest Common Factor
    /*
    9 - 1,(3),9
    12 - 1,2,(3),4,6,12
    GCP-3
    */
    int g1,g2;
    cin>>g1>>g2;

    int gcp=1;
    for(int i=2;i<=min(g1,g2);i++){
        if(g1%i==0 && g2%i==0){
            gcp=i;
        }
    }
    cout<<"GCP of "<<g1<<" "<<g2<<" : "<<gcp<<endl;

    // Euclidean Algorithm
    /*
    gcd(g1,g2)=gcd(n1-n2,n2) where n1>n2
    gcd(20,15)=gcd(5,15)=gcd(10,5)=gcd(5,5)=gcd(0,5)
    gcd=5
    */
    while(g1>0 && g2>0){
        if(g1>g2){
            g1=g1-g2;
        }else{
            g2=g2-g1;
        }
    }
    if(g1==0){
        cout<<"GCP : "<<g2<<endl;
    }else{
        cout<<"GCP : "<<g1<<endl;
    }

    while(g1>0 && g2>0){
        if(g1>g2){
            g1=g1%g2;
        }else{
            g2=g2%g1;
        }
    }
    if(g1==0){
        cout<<"GCP : "<<g2<<endl;
    }else{
        cout<<"GCP : "<<g1<<endl;
    }

}