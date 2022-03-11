#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int *arr=new int[n];
for(int i=0;i<n;i++) cin>>arr[i];
int x,y,temp;
sort(arr,arr+n);
temp=arr[0];
for(int i=0;i<n-1;i++){
if((arr[i+1]%arr[i]<temp)||(arr[i+1]%arr[i]==0)){
    x=arr[i+1];
    y=arr[i];
    break;
} 
}
cout<<x<<" "<<y<<endl;
}
return 0 ;
}