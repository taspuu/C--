#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s[5];
    getline(cin,s[5]);
    s[5].push_back('a');
    cout<<s[5]<<endl;
    s[5].pop_back();
    cout<<s[5]<<endl;


    return 0;
}