#include<bits/stdc++.h>
using namespace std;
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
#define gcd __gcd
#define min_3(a,b,c) min(a,min(b,c))
#define min_4(a,b,c,d) min(a,min(b,min(c,d)))
#define max_3(a,b,c)  max(a,max(b,c))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define all(x) x.begin(), x.end()
#define _sort(x) sort(all(x))
#define __sort(x, y) sort(all(x), y)
#define loop(i, N) for (int i = 0; i < N; i++)
#define input(arr, N) loop(i, N) cin >> arr[i];
#define output(arr, N) {loop(i, N) cout << arr[i] << ' '; cout << endl;}


// solve the problem here 

void solve(){
ll n;
cin>>n;
vector<ll>arr(n,0);
input(arr,n);
sort(arr.begin(),arr.end());
ll mx=arr[n-1], mn=arr[0];
ll ans=mx-mn;
cout<<ans<<"\n";
// vector<ll>ans;
// f(i,0,n){
//     ll temp=mx-arr[i] + arr[i]-mn;
//     ans.push_back(temp);
// }
// _sort(ans);
// cout<<ans[0]<<"\n";
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

tc(t){

solve();

}
return 0 ;
}