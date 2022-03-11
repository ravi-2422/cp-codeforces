#include <bits/stdc++.h>

using namespace std;

int main()
{

    long long int t;
    cin >> t;
    while (t--)
    {
        long long int a,b,c,maxi=0,a1=0,b1=0,c1=0;
        cin>>a>>b>>c;
       if(a>b&& a>c) maxi=a;
       else if(b>a && b>c) maxi=b;
       else maxi=c;
       if(a==0 && b==0 && c==0){a1=1;b1=1;c1=1;} else {
       if((maxi-a)==0) a1=0;
       else a1=(maxi-a)+1;
       if((maxi-b)==0) b1=0;
       else b1=(maxi-b)+1;
       if((maxi-c)==0) c1=0;
       else c1=(maxi-c)+1; }
       cout<<a1<<" "<<b1<<" "<<c1<<endl;
    }
    return 0;
}