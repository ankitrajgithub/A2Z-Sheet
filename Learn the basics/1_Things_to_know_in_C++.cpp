// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printName(){
    cout<<"Hey!! Ankit"<<endl;
}

void printNames(string name){
    cout<<"Hey!! "<<name<<endl;
}

//Take two numbers and print its sum
int sum(int num1,int num2){
    int num3=num1+num2;
    return num3;
}

void doSomething(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
}

void doSomethingWithString(string &s){
    s[0]='T';
    cout<<s<<endl;
}

void doSomethingWithArray(int arrs[],int n){
    arrs[0]+=100;
    cout<<"Value inside function : "<<arrs[0]<<endl;
}

int main(){

    //User Input / Output
    cout<<"Hey Ankit"<<"\n";
    cout<<"Hey Ankit Raj"<<endl<<"Hey Kashish"<<endl;

    int x,y;
    cin>>x>>y;
    cout<<"Value of x : "<<x<<" and y : "<<y<<endl;

    //Data Types
    // int
    int raj=10;
    // long
    long xy=10;
    // long long
    long long xx=1000000000000;

    //float, double
    float ankit1=5.66;
    float ankit2=5;
    double d=10.10;

    //string and getline
    string s1,s2;
    cin>>s1>>s2;
    cout<<s1<<" "<<s2<<endl;
    string str;
    getline(cin,str);
    cout<<str<<endl;

    //char 
    char ch='a';
    cin>>ch;
    cout<<ch<<endl;

    // If Else statements
    //Write a program that takes an input of age and prints if you are adult or not
    int age;
    cin>>age;
    if(age>=18){
        cout<<"You are adult!!"<<endl;
    }else if(age<18){
        cout<<"You are not adult!!"<<endl;
    }else{
        cout<<"Not a valid age"<<endl;
    }

    /*
    A school has following rules for grading system:
    a. Below 25 - F
    b. 25 to 44 - E
    c. 45 to 49 - D
    d. 50 to 59 - C
    e. 60 to 79 - B
    f. 80 to 100 - A
    Ask user for marks and print corresponding grade.
    */
    int marks;
    cin>>marks;
    if(marks<25){
        cout<<"F"<<endl;
    }else if(marks<=44){
        cout<<"E"<<endl;
    }else if(marks<=49){
        cout<<"D"<<endl;
    }else if(marks<=59){
        cout<<"C"<<endl;
    }else if(marks<=79){
        cout<<"B"<<endl;
    }else if(marks<=100){
        cout<<"A"<<endl;
    }else{
        cout<<"Not a valid marks"<<endl;
    }

    /*
    Take the age from the user and then act accordingly
    1. If age<18,
        print -> "not eligible for job"
    2. If age >=18 and age<=54,
        print -> "eligible for job"
    3. If age>=55 and age<=57,
        print -> "eligible for job, but retirement soon"
    4. If age>57,
        print -> "retirement time"
    */

    // Nested If Else statements
    int age2;
    cin>>age2;
    if(age2<18){
        cout<<"not eligible for job";
    }else if(age2<=57){
        cout<<"eligible for job";
        if(age2>=55){
            cout<<", but retirement soon";
        }
    }else{
        cout<<"retirement time";
    }

    //Switch statement
    /*
    Take the day no and print the corresponding day
    for 1 print Monday,
    for 2 print Tuesday, and so on for 7 print Sunday.
    */

    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"Monday";
            break;
        case 2:
            cout<<"Tuesday";
            break;
        case 3:
            cout<<"Wednesday";
            break;
        case 4:
            cout<<"Thursday";
            break;
        case 5:
            cout<<"Friday";
            break;
        case 6:
            cout<<"Saturday";
            break;
        case 7:
            cout<<"Sunday";
            break;
        default:
            cout<<"Invalid";
            break;
    }

    //Arrays
    int arr[5];
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3]>>arr[4];
    arr[3]+=10;
    cout<<arr[3];

    //2D array
    int array[3][5];
    array[1][3]=70;
    cout<<array[1][3];

    //Strings
    string s="Ankit Raj";
    cout<<s[3];
    int len=s.size();
    cout<<s[len-1];
    s[len-1]='z';

    //For loop
    for(int i=1;i<=10;i++){
        cout<<"Ankit Raj"<<endl;
    }

    //While loop
    int i=1;
    while(i<=5){
        cout<<"Ankit Raj"<<endl;
        i=i+1;
    }

    //Do-while loop
    do{
        cout<<"Ankit Raj"<<endl;
        i=i-1;
    }while(i>=1);

    //Functions
    /*
    Functions are set of code which performs something for you.
    Functions are used to modularize code.
    Functions are used to increase readability.
    Functions are used to use same code multiple times.
    void->which does not return anything, return, parameterised, non-parameterised
    */
    printName();

    string names;
    cin>>names;
    printNames(names);

    int num1,num2;
    cin>>num1>>num2;
    int res=sum(num1,num2);
    cout<<res<<endl;

    int minimum=min(num1,num2);
    int maximum=max(num1,num2);

    //Pass by Value
    int num=10;
    doSomething(num);
    cout<<num<<endl;

    //Pass by Reference
    string s4="Raj";
    doSomethingWithString(s4);
    cout<<s4<<endl;

    int arrs[5];
    int n=5;
    for(int i=0;i<=4;i++){
        cin>>arrs[i];
    }
    doSomethingWithArray(arrs,n);
    cout<<"Value outside function : "<<arrs[0]<<endl;
    for(int i=0;i<=4;i++){
        cout<<arrs[i]<<endl;
    }

    return 0;
}