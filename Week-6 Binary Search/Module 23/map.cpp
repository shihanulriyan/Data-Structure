#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int> mp;
    mp["tamim"] = 2;
    mp["ramim"] = 500;
    mp["shamim"] = 50;

    // for(auto it = mp.begin(); it != mp.end();it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }

    if(mp.count ("hamim"))
    {
        cout <<"ache";
    }
    else
    {
        cout <<"nai";
    }
    return 0;
}