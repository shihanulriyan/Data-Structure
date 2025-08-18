#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> l = {10,20,30,40,20,20,70};
    // list<int> l2 = {100,200};
    // vector v = {2,3,4,};
    // list<int> l2;
    // l2 = l;
    // l2.assign(l.begin(),l.end());

    // l.push_back(40);
    // l.push_front(100);

    // l.pop_back();
    // l.pop_back();
    // l.pop_front();
//    l.insert(next(l.begin(),2),v.begin(),v.end());
    // cout << *next(l.begin(),2);
    // l.erase(next(l.begin(),2), next(l.begin(),5));
    // replace(l.begin(), l.end(),2,100);

    auto it =  find(l.begin(),l.end(),200);
    if(it == l.end())
    {
        cout << "Not Found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }
    for (int val : l)
    {
        cout << val << endl;
    }

    return 0;
}