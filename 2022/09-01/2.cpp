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
int n=s.size();
int i=n-1,j=n-2;
int count=0;
while(i>=0 && j>=0){
if(s[i]=='0'){
    if(s[j]=='0' || s[j]=='5') break;
    else {
        count++;
        j--;
    }
} else if(s[i]=='5'){
    if(s[j]=='2' || s[j]=='7') break;
    else {
        count++;
        j--;
    }
} else {
    i--;
    j--;
    count++;
}
}
cout<<count<<"\n";

}
return 0 ;
}