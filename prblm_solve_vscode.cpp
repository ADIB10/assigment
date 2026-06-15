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
        lli n;
        vector<lli>v;
        string s,ss;
        cin>>n;
        cin>>s;
        ss=s;
        sort(s.begin(),s.end());
        for(int i=0;i<n;i++)
        {
            if(ss[i]!=s[i]){
                v.push_back(i+1);
            }
        }
        if(v.size()==0){cout<<"Bob\n";}
        else{
            cout<<"Alice\n";
            cout<<v.size()<<endl;
            for(int i=0;i<v.size();i++){
                cout<<v[i]<<' ';
            }cout<<endl;
        }
    }
}