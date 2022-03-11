#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define tc(t) int t; cin>>t; while(t--)
#define f(i,k,n) for(int i=k;i<n;i++)
#define rf(i,k,n) for(int i=k;i>=n;i--)
#define lld long long double
#define vpi vector<pair<int,int>>
#define ff first
#define ss second
#define vi vector<int>
#define pb push_back
#define ppb pop_back
#define mp make_pair

int main() {
int t;
cin>>t;
while(t--){
ll n,k;
cin>>n>>k;
vector<ll>arr(n);
ll sum=0,ans=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    sum+=arr[i];
}
if(sum<=k){
    ans=0;
} else {
    ll mn=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<mn) mn=arr[i];
    }
    if(sum>(n*mn)){
        ans = n-1;
        for(int i=0;i<n;i++) arr[i]=mn;
        ans+=abs(sum-k);
    } else {
      sort(arr.begin(),arr.end());
      for(int i=n-1;i>=0;i--){
          sum -= (arr[i]-mn);
            arr[i] = mn;
            ans++;
            if(sum<=k) break;
      }
    }

}
cout<<ans<<endl;
}
return 0 ;
}