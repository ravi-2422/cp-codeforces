#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
      long long int a,b,c,x,y;
      cin>>a>>b>>c;
      x=a+b*2+c*3;
      if(x%2==0) cout<<"0"<<endl;
      else cout<<"1"<<endl;
    }
    return 0;
}