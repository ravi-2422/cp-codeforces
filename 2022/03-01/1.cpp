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
int n,k;
cin>>n>>k;
 if(k<=((n+1)/2)||n==1) {
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j && (i%2==0 ) && k>0){ arr[i][j]='R'; k--; }
        else arr[i][j]='.';
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j];
    }
    cout<<endl;
    }
    
} else {
int ans=-1;
cout<<ans<<"\n";
}
}
return 0 ;
}