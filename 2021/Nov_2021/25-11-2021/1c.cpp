#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
long long n;
cin>>n;
long long temp=n;
int ans=-1,count=0;
bool flag=false;
while(temp!=0){
    int r=temp%10;
    temp/=10;
    if(r%2==0 && count==0){
        ans=0;
        break;
    }
    if(r%2==0 && temp==0){
        ans=1;
        break;
    }
    if(r%2==0 &&(temp>0 && temp<n)){
 flag =true;
    }
    count++;
}
if(flag==true && ans!=1) {
    ans=2;
    cout<<ans<<endl;
} else cout<<ans<<endl;
}
return 0 ;
}