#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string st,s;
        cin>>st;
        cin>>s;
       int ans=0;
       unordered_map<char,int>mp;
       for(int i=1;i<=26;i++){
           mp[st[i-1]]=i;
       }
       for(int i=0;i<s.length()-1;i++){
           ans+=abs(mp[s[i]]-mp[s[i+1]]);
       }
       cout<<ans<<endl;
    }
    return 0;
}