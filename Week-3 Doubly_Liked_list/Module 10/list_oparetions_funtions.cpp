#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {10,20,30,40,60,50,10};
    // l.remove(10);
    // l.sort(greater<int>());
    // l.unique();
    l.reverse();
    for (int val : l)
    {
        cout << val << endl;
    }
    return 0;
}