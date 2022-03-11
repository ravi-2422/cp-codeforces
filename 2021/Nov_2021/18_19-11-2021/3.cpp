#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a,b,c,d;
        cin>>a>>b>>c;
        d=abs(a+c-2*b);
       if(d%3==0) cout<<"0\n";
       else cout<<"1\n"; 
    }
    return 0;
}