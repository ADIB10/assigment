#include <bits/stdc++.h>
#include <iostream>

#define lli long long int 
using namespace std;
int main()
{
    lli t=1;
    cin>>t;
    while(t)
    {t--;
        lli n,x;
        vector<lli>v;
        string s,ss;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            v.push_back(x);
        }sort(v.begin(),v.end());
        cout<<v.back()-v.front()+1<<endl;
    }
}