#include<bits/stdc++.h>
using namespace std;
long long mini(long long a,long long b,long long c){
    if(a<b && a<c) return a;
    else if(b<a && b<c) return b;
    return c;
}
int main() {

int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long t = INT_MAX, t1 = INT_MAX, ans = INT_MAX, t2 = INT_MAX;

if(n<=6){
    t=15;
} else if(n>6 && n<=8) {
  t=20;
} else if(n>8 && n<=10){
    t=25;
}
else {
int r=n%6;
   long long temp =n/6;
   if(r==0) t=temp*15;
   else t=temp*15+15;
}

if(n>10){
    int r=n%8;
    long long temp=n/8;
    if(r==0) t1=temp*20;
   else if(r<=6 && r>0) t1=temp*20 +15;
    else  t1=temp*20+20;
}
if (n > 10)
{
    int r = n % 10;
    long long temp = n/10;
    if(r==0) t2=temp*25;

   else if (r <= 6 && r>0)
        t2 = temp * 25+15;
    else if(r>6 && r<=8)
        t2 = temp * 25 + 20;
        else t2=temp*25 +25;
}
ans = mini(t,t1, t2);
cout<<ans<<endl;
}
return 0 ;
}