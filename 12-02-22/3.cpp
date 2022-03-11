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
ll arr[n];
input(arr,n);
ll ans=-1;

    ll e=0,odd=0;
    ll sum_e=0,sum_o=0;
    for(int i=1;i<n-1;i++){
        if(arr[i]%2==0){
            sum_e+=arr[i];
            e++;
        } else {
            sum_o+=arr[i];
            odd++;
        }
    }
 if(odd==(n-2)) ans=-1;
 else ans=((sum_e/2) + (sum_o+odd)/2);

cout<<ans<<"\n";
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

tc(t){

solve();

}
return 0 ;
}