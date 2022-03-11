#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;
int ans=(a+b)/4;
int x=min(a,b);
ans=min(ans,x);
cout<<ans<<endl;
}
return 0 ;
}