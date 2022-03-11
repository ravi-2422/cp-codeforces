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

// bool comp(int a,int b){
// if(a>b) return true;
// return false;
// }

bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if(a.ff!=b.ff)
    return a.ff>b.ff;
    else return a.ss<b.ss;
}

int main() {


int n;
cin>>n;
vector<pair<int,int>> arr(n);
for(int i=0;i<n;i++) cin>>arr[i].ff>>arr[i].ss;
sort(arr.begin(),arr.end(),comp);
for(int i=0;i<n;i++) cout<<arr[i].ff<<" - "<<arr[i].ss<<"\n";

return 0 ;
}