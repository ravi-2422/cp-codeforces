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
string s;
cin>>s;
string ans="YES";
int n=s.size();
if(n%2==1) ans="NO";
else {
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[i+n/2]){
            ans="NO";
            break;
        }
    }
}
cout<<ans<<endl;
}
return 0 ;
}