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
int n,a,b;
cin>>n>>a>>b;
int arr[n];
bool flag=false;
arr[0]=a;
arr[n-1]=b;

int x=a,y=b;
if (!(a <= n / 2 && b >= n / 2)&& n!=2)
{
    flag = true;
}
 else {
for(int i=1;i<n/2;i++){
    if(y+1<=n) arr[i]=++y;
    else arr[i]=++x;
}
for(int i=n/2;i<n-1;i++){
    if(a-1>0) arr[i]=--a;
    else arr[i]=++x;
}

 } 

    if(flag){
        int ans=-1;
        cout << ans << "\n";
    } 
    else {
        for(int i=0;i<n-1;i++) cout<<arr[i]<<" ";
        cout<<arr[n-1]<<endl;
    }
}
return 0 ;
}