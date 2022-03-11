#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
string s;
cin>>s;
int count0=0,count1=0,ans=1,count=0;
int n=s.length();
for(int i=0;i<n-1;i++){
    if(s[i]!=s[i+1]) count++;
    if(count>2){
        ans=2;
        break;
    }

if(s[i]=='0') count0++;
else count1++;

}
if (s[n - 1] == '0')
    count0++;
else
    count1++;

if(count0==n){
    ans=1;
}else if(count1==n)ans=0;

if(count==2 && (s[0=='0'] && s[n-1]=='0')) ans=2;
cout<<ans<<endl;
}
return 0 ;
}