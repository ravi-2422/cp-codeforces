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

ll gcd(ll a,ll b){
if(b==0) return a;
return gcd(b,a%b);
}

int main() {

int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll arr[n];
for(int i=0;i<n;i++) cin>>arr[i];
sort(arr, arr + n, [](int x, int y)
     { return x % 2 < y % 2; });
ll count=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(gcd(arr[i],2*arr[j])>1) count++;
    }
}

cout<<count<<"\n";

}
return 0 ;
}