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
bool bs(ll n){
    ll low=1;
    ll heigh=n;
    while(low<=heigh){
        ll mid=((heigh-low)/2 + low);
        if((mid*mid)==n){
           return true;
        } else if(mid*mid>n){
            heigh=mid-1;
        } else {
            low=mid+1;
        }
    }
    return false;
}

void solve(){
ll n;
cin>>n;
ll arr[n];
input(arr,n);
loop(i,n){
    if(bs(arr[i])) {

    }
    else cout<<"NO\n";
}
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

solve();

return 0 ;
}