#include<bits/stdc++.h>
using namespace std;

void rec(int i, int n)
{
    // base case
    if(i>n)
    {
        return;
    }
    cout << i << endl;
    rec(i+1,n);
}
int main()
{
    int n = 5;
    rec(1,n);
    return 0;
}