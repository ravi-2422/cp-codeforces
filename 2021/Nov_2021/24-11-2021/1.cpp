#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
int n;
cin>>n;
string s;
cin>>s;
string s1="",s2="";
for(int i=0;i<n-1;i++){
    if(s[i]=='?' && s[i+1]=='R') s1+="B";
    else if(s[i]=='?' && s[i+1]=='B') s1+="R";
    else if(s[i]=='?' && s[i+1]=='?') s1+="R";
    else s1+=s[i];
}
if(s[n-1]=='?' && s1[n-2]=='B') s1+="R";
else if (s[n - 1] == '?' && s1[n - 2] == 'R') s1+='B';
    else s1 += s[n - 1];


for(int i=0;i<n-1;i++){
    if(s[i]=='?' && s[i+1]=='R') s2+="B";
    else if(s[i]=='?' && s[i+1]=='B') s2+="R";
    else if(s[i]=='?' && s[i+1]=='?') s2+="B";
    else s2+=s[i];
}
if (s[n - 1] == '?' && s2[n - 2] == 'R')  s2 += "B";
else if(s[n-1]=='?' && s2[n-2]=='B') s2+="R";
else s2+=s[n-1];
if(n==1){ s1="R"; 
s2="R"; }


int count1=0,count2=0;
for(int i=0;i<n-1;i++){
if(s1[i]==s1[i+1]) count1++;
if(s2[i]==s2[i+1]) count2++;
}
if(count1>count2) cout<<s2<<endl;
else cout<<s1<<endl;
}
return 0 ;
}