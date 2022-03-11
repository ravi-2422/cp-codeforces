#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans=0;
        
        for(int i=n-2;i>=0;i--){
         int temp=s[i]-'0';
         if(temp!=0) ans+=(temp+1);
        
        }
        ans+=s[n-1]-'0';
        cout<<ans<<endl;
    }
    return 0;
}