#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
string s1,s2;
int n1,n2;
cin>>s1>>n1;
cin>>s2>>n2;
if(n1>10 && n2>10){
    n1-=10;
    n2-=10;
} else if(n1>100 && n2>100){
    n1-=100;
    n2-=100;
} else if(n1>1000 && n2>1000){
    n1-=1000;
    n2-=1000;
} else if(n1>10000 && n2>10000){
    n1-=10000;
    n2-=10000;
} else if(n1>100000 && n2>100000){
    n1-=100000;
    n2-=100000;
}

for(int i=0;i<n1;i++) s1+="0";
for(int i=0;i<n2;i++) s2+="0";

int x=s1.length(),y=s2.length();
if(s1==s2 && (x==y)) cout<<"=\n";
else if((x>y)) cout<<">\n";
else if(x<y) cout<<"<\n";
else if(s1>s2) cout<<">\n";
else cout<<"<\n";
}
return 0 ;
}