#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        int n,l=-1,r=-1;
        cin>>n;
        cin>>s;
       
        for(int i=0;i<n-1;i++){
            if ((s[i] == 'a' && s[i + 1] == 'b') || (s[i] == 'b' && s[i + 1] == 'a'))
            {
                l = i + 1;
                r = i + 2;
                break;
            }
        }
       cout<<l<<" "<<r<<endl;
    }
    return 0;
}