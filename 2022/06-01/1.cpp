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

ll mull(int count){
   ll ans=1;
   for(int i=0;i<count;i++) ans*=2;
   return ans;
}

int main() {

int t;
cin>>t;
while(t--){
int n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++)
 cin>>arr[i];
ll count=0;
for (int i = 0; i < n; i++)
{
   while(arr[i]%2==0){
       count++;
       arr[i]/=2;
   }
}
sort(arr,arr+n);
ll ans=0;
for(int i=1;i<=count;i++) arr[n-1]*=2;
for(int i=0;i<n;i++) ans+=arr[i];
cout<<ans<<"\n";
}
return 0 ;
}