#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(30);
    cout << pq.top() << endl;
    pq.push(2);
    cout << pq.top() << endl;
    pq.pop();   // 100
    pq.pop();   // 30
    cout << pq.top() << endl;
    return 0;
}