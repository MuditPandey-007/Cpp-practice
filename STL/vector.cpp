#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v; // declaring a vector

    v.push_back(2);    // pushes 2 in the back of the vector
    v.emplace_back(4); // pushes 4 in the back of the vector

    vector<pair<int, int>> vec; // pair inside a vector

    vec.push_back({1, 2});  // we have to give curly braces in push back
    vec.emplace_back(3, 4); // no need to give curly braces

    vector<int> v1(5, 566); // v1= {566,566,566,566,566}

    vector<int> v2(5); // v2 has size 5

    v2 = v1; // or we can say vector<int> v2(v1);
    for (auto it : v2)
    { // or we can write vector<int>::iterator it = v.begin();
        cout << it << " ";
    }
    cout << endl;

    // or we can directly acces elements of vector like this:
    cout << "index method of printing vector : " << v2[0] << endl;

    // iterator
    vector<int> vect = {1,2,3,4,5};
    vector<int>::iterator it = vect.begin();
    // iterator declaration is shown above this line

    it++;
    cout << "printing using iterator : " << *(it) << endl;

    it = it + 2;
    cout << "printing after using it+2: " << *(it) << endl;

    // two ways to print:
    // way 1 :
    cout<<endl<<"way 1 of printing vector using iterator : ";
    for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << *(it) << " ";
    }

    // way2:
       cout<<endl<<"way 2 of printing vector using iterator : ";
    for (auto it = v2.begin(); it != v2.end(); it++)
    {
        cout << *( it) << " ";
    }

    // way3:
    cout<<endl<<"way 3 of printing vector smallest code : ";
    for (auto it : v2)
    {
        cout << it << " ";
    }

    //way4 : normal way just like we use in arrays (not recommended though): 
    cout<<endl<<"way 4 of printing : ";
    for(int i=0; i<5; i++){
        cout<<v2[i]<<" ";
    } 
    


    // Erase
    // v[] = {10,20,30,40,50}

    v.erase(v.begin() + 1); // v[] = {10,30,40,50}

    // v[] = {10,20,30,40,50,60}

    v.erase(v.begin() + 2, v.begin() + 3); // v[] = {10,20,50,60}

    // Insert functions:

    vector<int> ve(2, 200);         // v[]= {200,200}
    ve.insert(ve.begin() + 1, 400); // v[] = {200,400,200}
    ve.insert(ve.begin(), 2, 50);   // v[] = {50,50,200,400,200}

    vector<int> copy(2, 30); //{30,30}
    ve.insert(ve.begin(), copy.begin(), copy.end() - 1);
    // v[] = {30,30,50,200,400,200}

    //{10,20}
    cout << ve.size(); // 2

    //{10,20}
    v.pop_back(); // {10} //20 hatt jayega and output 10 ayega

    // swap

    // v1 = {10,20} //v2 = {30,40}
    v1.swap(v2);

    v.clear(); // erass the entire vector

    return 0;
}