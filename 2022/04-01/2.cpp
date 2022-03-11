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
string s;
cin>>s;
int ans=-1;
if(n==1){
    int temp=s[0]-'0';
    if(temp%2==0) ans=2;
    else ans=1;
} else {
    vector<pair<int,int>>vec;
    for(int i=0;i<n;i++){
      int temp=s[i]-'0';
        vec.push_back(mp(temp, i));
    } 
    sort(vec.begin(),vec.end());
    if(n%2==1 && n>1){
    if(vec[n-1].ff%2==1) ans=1;
    else ans=2;
    } else {
   ans=2;
    }

}
cout<<ans<<"\n";
}
return 0 ;
}