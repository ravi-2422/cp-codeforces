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

int n;
cin>>n;
vector<int>arr;
for(int i=0;i<n;i++){
    int temp;
    cin>>temp;
    arr.push_back(temp);
}
ll ans=0;
for(int i=0;i<arr.size();i++){
    for(int j=i+1;j<arr.size();j++){
        int temp = gcd(arr[i], arr[j]);
        auto it=find(arr.begin(),arr.end(),temp);
         if (it!=arr.end()){
             ans++;
             arr.push_back(temp);
         }
    }
}
cout<<ans<<"\n";
return 0 ;
}