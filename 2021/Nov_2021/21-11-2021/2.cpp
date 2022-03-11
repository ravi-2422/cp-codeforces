#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
string s;
cin>>s;
string ans="";
int n=s.size();
int ab=0,ba=0;
for(int i=0;i<n-1;i++){
if(s[i]=='a' && s[i+1]=='b') ab++;
if(s[i]=='b' && s[i+1]=='a') ba++;
}
if(ab==ba) ans=s;
else if(ab>ba) s[n-1]='a';
 else if(ba>ab)  s[n-1]='b';
 ans=s;
 cout<<ans<<endl;
}
return 0 ;
}