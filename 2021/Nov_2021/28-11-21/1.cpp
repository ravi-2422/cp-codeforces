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
int count=0;
long long sum =arr[0];
for(int i=0;i<n;i++){
    if(arr[i]==2){
        arr[i]=1;
        count++;
    } else if(arr[i]==4){
        arr[i]=1;
        count+=2;
    }else if(arr[i]==6){
        arr[i]=3;
        count++;
    } else if(arr[i]==8){
        arr[i]==1;
        count+=3;
    } else if(arr[i]==10){
        arr[i]==5;
        count++;
    }else if(arr[i]==12){
        arr[i]==3;
        count+=2;
    } else if(arr[i]==14){
        arr[i]=7;
        count++;
    }
     
}
sort(arr,arr+n);

if (count > 24)
{
    count-=24;
    sum = arr[n - 1] * pow(2, count);
 sum = sum * pow(2, 24);
}
    else 
    sum = (arr[n - 1] * pow(2, count));
    if(n>1){
for(int i=0;i<n-1;i++) sum+=arr[i]; }
cout<<sum<<endl;
}
return 0 ;
}