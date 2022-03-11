#include <bits/stdc++.h>
using namespace std;
bool prime(int n){
    if(n==2) return true;
    if(n%2==0) return false;
    for(int i=3;i<sqrt(n);i+=2){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x=0,sum=0;
        cin>>n;
        int* arr=new int[n];
        vector<int>ans;
        for(int i=0;i<n;i++) cin>>arr[i];
   // sort(arr,arr+n);
    for(int i=0;i<n;i++){
        sum+=arr[i];
        ans.push_back(i);
    }
if(!prime(sum)){
    break;
} else{
    for(int i=0;i<n;i++){
        sum-=arr[i];
        if(!prime(sum)){
            ans.pop_back();
           
        } else{
            break;
        }
    }
}

x=ans.size();
cout<<x<<endl;
for(int i=0;i<x;i++) cout<<ans[i]<<" ";
cout<<endl;

    }
    return 0;
}