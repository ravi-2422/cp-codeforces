#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
 int n,s ;
 cin>>n>>s;
 int ans;
 if(n==1) ans=s;
 else if(n%2==1){
     ans=(s)/(n-n/2);
 } else {
     ans=s/(n/2+1);
 }
 cout<<ans<<endl;
}
return 0 ;
}