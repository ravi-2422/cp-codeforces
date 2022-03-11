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

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {

int t;
cin>>t;
while(t--){
ll n;
cin>>n;
ll a,b,c;
if(n%2==0) {
    a=n/2-1;
    b=n/2;
    c=1;
} else {
    for(int i=2;i<=n;i++){
        a=i;
        b=n-i-1;
        if(gcd(a,b)==1) {
           c=1;
           break;
        }
    }
}
cout<<a<<" "<<b<<" "<<c<<"\n";
}
return 0 ;
}