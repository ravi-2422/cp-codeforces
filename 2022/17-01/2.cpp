#include<bits/stdc++.h>
using namespace std;
#define ll long long

// solve the problem here 

void solve(){
ll n;
cin>>n;
ll arr[2][n];
for(int i=0;i<2;i++){
    for(int j=0;j<n;j++) cin>>arr[i][j];
}
ll ans=0;
for(int i=0;i<n;i++){
    if((arr[0][i]^arr[1][i])==1) ans+=2;
    else if ((arr[0][i] ^ arr[1][i]) == 0 && arr[0][i]==0) ans++;
    else if ((arr[0][i] ^ arr[1][i]) == 0)
    {
       if(i<n-1) {
           if (((arr[0][i+1] ^ arr[1][i+1]) == 0) && arr[1][i+1]==0){
               ans+=2;
               i++;
           }
       }
    }
}
cout<<ans<<endl;
}

int main() {
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t;
cin>>t;
while(t--){

solve();

}
return 0 ;
}