#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
long long int x,n,ans=0;
cin>>x>>n;
if(n%4==0){
    ans=0;
}else if(n%4==1){
    ans=-n;

}else if(n%4==2){
    ans=1;
} else{
    ans=n+1;
}
if(abs(x)%2==0){
    x+=ans;
} else{
    x-=ans;
}
cout<<x<<endl;
}
return 0 ;
}