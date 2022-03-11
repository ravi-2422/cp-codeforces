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
int n,m,r,c;
cin>>n>>m>>r>>c;
char arr[n][m];
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
        if(arr[i][j]=='B') count++;
    }
}
int ans;
if(count==0){
    ans=-1;
} else if(arr[r-1][c-1]=='B'){
    ans=0;
} else {
    int temp=0;
   for(int i=0;i<n;i++) {
       if(arr[i][c-1]=='B') break;
       if(i==n-1) temp++;
   }
   
   for(int i=0;i<m;i++) {
       if(arr[r-1][i]=='B') break;
       if(i==m-1) temp++;
   }
   if(temp==2) ans=2;
   else ans=1;
} 
cout<<ans<<"\n";
}
return 0 ;
}