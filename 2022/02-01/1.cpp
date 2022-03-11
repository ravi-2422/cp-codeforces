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
vi v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
ll sum=0;
for(int i=0;i<n;i++) sum+=v[i];

int ans=0;
if(sum%n!=0) ans=1;
cout<<ans<<"\n";

}
return 0 ;
}