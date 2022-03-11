#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int* arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    int count=0;
   for(int i=0;i<n;i++){
    //    if(arr[i]>i+1) {
           int temp = (arr[i]-(i+1)-count);
           count+=temp>0?temp:0;
            // }
   }
cout<<count<<endl;
    }
    return 0;
}