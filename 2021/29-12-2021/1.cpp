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
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++) {
    if(arr[i]<0) arr[i]=abs(arr[i]);
     
}
unordered_map<int,int>mp;
for(int i=0;i<n;i++) mp[arr[i]]++;
int ans=0;
for(auto x:mp){
    if(x.second>=2 && x.first!=0) ans+=2; 
    else ans++;
}
cout<<ans<<endl;
}
return 0 ;
}