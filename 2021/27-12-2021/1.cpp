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
ll a,b,c;
cin>>a>>b>>c;
string ans="NO";
if((a==b && c%2==0)||(b==c && a%2==0)|| (a==c && b%2==0)){
    ans="YES";
} else if((abs(a-b)==c)||(abs(b-c)==a) || (abs(c-a)==b)){
    ans="YES";
}
cout<<ans<<"\n";
}
return 0 ;
}