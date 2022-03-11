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
ll n,m,rb,cb,rd,cd;
cin>>n>>m>>rb>>cb>>rd>>cd;
ll ans=0,dr=1,dc=1;
while (1)
{
    if(rb==rd || cb==cd) break;
    if(dr==1 && rb==n) dr=-1;
    else if(dr==-1 && rb==1) dr=1;
    if(dc==1 && cb==m) dc=-1;
    else if(dc==-1 && cb==1) dc=1;
    rb+=dr;
    cb+=dc;
    ans++;
}
cout<<ans<<"\n";

}
return 0 ;
}