#include <bits/stdc++.h>

using namespace std;

int main()
{
   long long int t;
    cin >> t;
    while (t--)
    {
        long long int n;
        cin>>n;
        long long int l,r;
       l=-n+1;
       r=n;
        cout<<l<<" "<<r<<endl;
    }
    return 0;
}