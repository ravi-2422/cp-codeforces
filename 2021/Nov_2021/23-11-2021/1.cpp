#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int *a=new int[n];
int *b=new int[n];
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
sort(a,a+n);
sort(b,b+n);
int count=0,count1=0;
for(int i=0;i<n;i++){
    if(b[i]-a[i]==1 )count++;
    else if(b[i]-a[i]==0) count1++;
    
}
if(count+count1==n) cout<<"YES\n";
else cout<<"NO\n";
}
return 0 ;
}