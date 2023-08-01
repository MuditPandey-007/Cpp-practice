#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> ls;

    ls.push_back(2); //{2}
    ls.emplace_back(4); //{2,4}
    
    ls.push_front(5); //{5,2,4}
    //rest all functions are same as vector 

    deque<int> dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(3); //{3,1,2}
    dq.emplace_front(4); //{4,3,1,2}

    dq.pop_back(); //{4,3,1}
    dq.pop_front(); //{3,1}


    //Stack

    stack<int> st;
    st.push(1); //{1}
    st.push(2); //{2,1}
    st.push(3); //{3,2,1}
    st.push(4); //{4,3,2,1}
    st.emplace(5); //{5,4,3,2,1}


    cout<<st.top(); //print 5(st[2] is invalid here)
    //(5,4,3,2,1)
    st.pop();

    cout<<st.top(); //prints 4
    cout<<st.size(); //4
    cout<<st.empty(); //false here

    stack<int> st1,st2;
    st1.swap(st2);

    //queue
    queue<int> q;
    q.push(1); //{1}
    q.push(2); //{1,2}
    q.emplace(4); //{1,2,4}

    q.back()+=5 ; //adds 5 with last element added to the queue

    //priority queue

    priority_queue<int> pq;

    pq.push(5); ///{5}
    pq.pop(); //{8,5,2}

    cout<<pq.top(); //prints 8
    

    //minimum heap
    priority_queue<int>, vector<int>, greater<int> > pq;
    pq.push(5); //{5}
    pq.push(2); //2,5
    pq.push(8); //2,5,8
    pq.emplace(10); //2,5,8,10

    cout<<pq.top(); //prints 2

    //Set

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2);
    s.insert(3);

    set<int>st;
    st.insert(1); //{1}
    st.insert(2); //{1,2}
    st.insert(2); //{1,2} it does nothing

    auto it = st.find(3); //output 2

    auto it = st.find(7); //output st.end() {index right after end}--> 5

    st.erase(5); //1,2,3,4 //takes logarithmic time

    int cnt = st.count(1); //if 1 is there gives output 1

    auto it = st.find(3);
    st.erase(it); //takes constant time

    //{1,2,3,4,5}

    auto it1 = st.find(2); //-->1 
    auto it2 = st.find(4); //-->3
    st.erase(it1,it2); //after erase {1,4,5}

    auto it = st.lower_bound(4); //-->3
    auto it = st.upper_bound(2); //-->1

    //multiset
    ms.erase(ms.find(1)); //only single 1 erased
    ms.erase(ms.find(1), ms.find(2)+2);

    //unordered set -> stores unique numbers but in random order

    unordered set<int> st;
    //better capacity

    //Map -> key and value , keys are unique but values can be duplicate

        map<int, int> mpp; //1
        map<int , pair<int, int> >mpp;
        map< pair<int,int> , int > mpp; //2

        //keys and value can have any data type
        
        mpp[1] = 2; //for 1st declaration // {(1,2)}
        mpp.emplace({3,1}); //for 1st declaration //{{1,2},{3,1}}
        mpp.insert({2,4}); //fopr 1st declaration

        for(auto it : mpp){
            cout<<it.first<<" "<<it.second<<endl; //print {1,2}
        }

        cout<<mpp[1]; //output 2
        cout<<mpp[5]; //output 0

        auto it = mpp.find(3);
        cout<<*(it).second; //output 1

        auto it = mpp.find(5); //not present so mpp.end()

        auto it = mpp.lower_bound(2);
        auto it =  mpp.upper_bound(3);

        return 0;
}


    
