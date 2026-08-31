#include<bits/stdc++.h>
using namespace std;

//Algorithms Containers Functions Iterators

//Pairs
void explainPair(){
    pair<int,int> p={1,2};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,pair<int,int>> q={1,{2,3}};
    cout<<q.first<<" "<<q.second.second<<" "<<q.second.first<<endl;

    pair<int,int> arr[]={{1,2},{3,4},{5,6}};
    cout<<arr[1].second<<endl;
}

void explainVector(){
    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);
    v.emplace_back(8);

    vector<pair<int,int>> vec;

    vec.push_back({1,2});
    vec.emplace_back(3,4);

    vector<int> v1(5,100);

    vector<int> v2(5);

    vector<int> v3(5,20);
    vector<int> v4(v1);

    vector<int>::iterator it=v.begin();

    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" "<<endl;

    vector<int>::iterator it1=v.end();

    vector<int>::reverse_iterator it2=v.rend();

    vector<int>::reverse_iterator it3=v.rbegin();

    cout<<v[0]<< " "<<v.at(0)<<endl;

    cout<<v.back()<<endl;

    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it=v.begin();it!=v.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;

    for(auto it:v){
        cout<<it<<" ";
    }
    cout<<endl;

    // {10,20,12,23}
    v.erase(v.begin()+1); // {10,12,23}

    // {10,20,12,23,35}
    v.erase(v.begin()+1,v.begin()+3); // {10,23,35} [start,end)
    
    // Insert function
    vector<int> v(2,100); // {100,100}

    v.insert(v.begin(),300); // {300,100,100}

    v.insert(v.begin()+1,2,10); // {300,10,10,100,100}

    vector<int> copy(2,50); // {50,50}

    v.insert(v.begin(),copy.begin(),copy.end()); // {50,50,300,10,10,100,100}

    // {10,20}
    cout<<v.size()<<endl; // 2
    
    // {10,20}
    v.pop_back(); // {10}
    
    // v1->{10,20}
    // v2->{30,40}
    v1.swap(v2); // v1->{30,40}, v2->{10,20}

    v.clear(); // Erases the entire vector

    cout<<v.empty()<<endl;
}

void explainList(){
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}

    ls.push_front(5); // {5,2,4}
    ls.emplace_back(); // {2,4}

    //Rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainDeque(){
    deque<int> dq;

    dq.push_back(1); // {11}
    dq.emplace_back(2); // {1,2}
    dq.push_front(5); // {5,1,2}
    dq.emplace_front(3); // {3,5,1,2}

    dq.pop_back(); // {3,5,1}
    dq.pop_front(); // {5,1}

    cout<<dq.back()<<endl;

    cout<<dq.front()<<endl;

    for(deque<int>::iterator it=dq.begin();it!=dq.end();it++){
        cout<<*(it)<<" ";
    }

    //Rest functions same as vector
    // begin, end, rbegin, rend, clear, insert, size, swap
}

void explainStack(){
    stack<int> st;

    st.push(1); // {1}
    st.push(2); // {1,2}
    st.push(3); // {1,2,3}
    st.push(4); // {1,2,3,4}
    st.emplace(5); // {1,2,3,4,5}

    cout<<st.top()<<endl; // Prints 1 "** st[2] is invalid **"

    st.pop(); // st looks like {2,3,4,5}

    cout<<st.top()<<endl; // 2

    cout<<st.size()<<endl; // 4

    cout<<st.empty()<<endl;

    stack<int> st2;
    st.swap(st2);
}

void explainQueue(){
    queue<int> q;

    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(3); // {1,2,3}

    q.back()+=5;

    cout<<q.back()<<endl; // Prints 8

    // Q is {1,2,8}
    cout<<q.front()<<endl; // Prints 1

    q.pop(); // {2,8}

    cout<<q.front()<<endl; // Prints 2

    //size swap empty same as stack
}

void explainPQ(){
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(8); // {2,5,8}
    pq.emplace(10); //{2,5,8,10}

    cout<<pq.top()<<endl; //Prints 10

    pq.pop(); // {2,5,8}

    cout<<pq.top()<<endl; // prints 8

    // size swap empty function same as others

    //Minimum Heap
    priority_queue<int,vector<int>,greater<int>> pq2;
    
    pq2.push(5); //{5}
    pq2.push(2); // {2,5}
    pq2.push(8); // {2,5,8}
    pq2.push(10); // {2,5,8,10}

    cout<<pq2.top()<<endl; // 2
}

void explainSet(){
    set<int> st;

    st.insert(1); // {1}
    st.emplace(2); // {1,2}
    st.insert(2); // {1,2}
    st.insert(4); // {1,2,4}
    st.insert(3); // {1,2,3,4}

    // Functionality of insert in vector can be used also, that only increases efficiency.

    //begin(), end(), rbegin(), rend(), size(), empty() and swap() are same as those of above.

    //{1,2,3,4}
    auto it1=st.find(3);
    cout<<*it1<<endl;
    
    //{1,2,3,4}
    auto it2=st.find(6);
    cout<<*it2<<endl;

    //{1,4,5}
    st.erase(5); // Erases 5, takes logarithmic time

    int cnt=st.count(3);

    auto it=st.find(3);
    st.erase(3); //Takes constant time

    auto it3=st.find(2);
    auto it4=st.find(4);
    st.erase(it3,it4); // After erase {1,4,5} [first,last)

    // lower_bound() and upper_bound() function works in the same way as in vector it does.

    //This is the syntax
    auto it5=st.lower_bound(2);

    auto it6=st.upper_bound(4);
}

void explainMultiSet(){
    //Everything is same as set
    // Only stores duplicate elements also

    multiset<int> ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

    ms.erase(1); // All 1's erased

    int count=ms.count(1);

    // Only a single one erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1),next(ms.find(1),2));

    //Rest all function same as set
}

void explainUSet(){
    unordered_set<int> st;
    /* Lower bound and Upper bound function does not works, rest all functions are same as above, it does 
    not stores in any particular order it has a better complexity than set in most cases, except some when 
    collision happens. */
}

void explainMap(){
    map<int,int> mpp;
    map<int, pair<int,int>> mpp1;
    map<pair<int,int>,int> mpp2;

    mpp[1]=2;
    mpp.emplace(3,1);
    mpp.insert({2,4});
    mpp2[{2,3}]=100;

    for(auto it:mpp){
        cout<<it.first<<" "<<it.second<<endl;
    }

    cout<<mpp[1]<<endl;
    cout<<mpp[5]<<endl;

    auto it=mpp.find(3);
    cout<<(*it).second<<endl;
    cout<<it->second<<endl;

    auto it2=mpp.find(5);

    //This is the syntax
    auto it3=mpp.lower_bound(2);

    auto it4=mpp.upper_bound(3);

    // erase, swap, size, empty are same as above
}

void explainMultiMap(){
    // Everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used here
}

void explainUnorderedMap(){
    // Same as set and unordered_Set difference.
}

bool comp(pair<int,int> p1, pair<int,int> p2){
    if(p1.second<p2.second) return true;
    if(p1.second>p2.second) return false;
    
    //They are same
    if(p1.first>p2.first){
        return true;
    }else{
        return false;
    }
}

void explainExtra(){
    int a[]={4,3,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    sort(a,a+n);

    vector<int> v={4,3,2,1};
    sort(v.begin(),v.end());

    sort(a+2,a+4);

    sort(a,a+n,greater<int>());

    pair<int,int> a[]={{1,2},{3,4},{4,5}};
    //Sort it according to second element.
    // If second element is same,then sort it according to first element but in descending

    sort(a,a+n,comp);

    // {{4,1},{2,1},{1,2}};

    int num=7;
    int cnt=__builtin_popcount(num); //3

    long long num2=16786578687;
    int cnt2=__builtin_popcountll(num2); 

    string s="123";
    sort(s.begin(),s.end());

    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(),s.end()));

    int maxi=*max_element(a,a+n);
    int mini=*min_element(a,a+n);
}


int main(){
    explainPair();
    explainVector();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
}