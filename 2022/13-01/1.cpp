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
int new_a = b - (c - b);
if (new_a >= a && new_a % a == 0 && new_a != 0)
{
    ans="YES";
}

int new_b = a + (c - a) / 2;
if (new_b >= b && (c - a) % 2 == 0 && new_b % b == 0 && new_b != 0)
{
    ans="YES";
}

int new_c = a + 2 * (b - a);
if (new_c >= c && new_c % c == 0 && new_c != 0)
{
    ans="YES";
    
}

cout <<ans<<"\n";
}
return 0 ;
}