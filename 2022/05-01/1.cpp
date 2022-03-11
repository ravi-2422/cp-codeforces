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
int x,y;
cin>>x>>y;
int a,b;
if((x+y)%2==1){
    a=-1;
    b=-1;
} else {
if(x%2==0 && y%2==0) {
    a=x/2;
    b=y/2;
} else {
    a=(x+1)/2;
    b=y/2;
}
}
cout<<a<<" "<<b<<endl;
}
return 0 ;
}