#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int* a=new int[n];
for(int i=0;i<n;i++) cin>>a[i];
int count=0,count1=0;
for(int i=0;i<n;i++){
    if(a[i]==1) count1++;
    else if(a[i]==0) count++;
}
if(count==0) cout<<count1<<endl;
else {
    long long  ans = (pow(2, count) * count1);
               cout << ans << endl; }
}
return 0 ;
}