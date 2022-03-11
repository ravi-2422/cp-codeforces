#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
int a,b;
cin>>a>>b;

int count=0;
if(a==b && a!=0) {
    count=a/2;
} else if(a>=(4*b)) {
    count=b;
} else if(b>=(4*a)){
    count=a;
} else if(a!=0 && b!=0){
    count=(a+b)/4;
}
cout<<count<<endl;
}
return 0 ;
}