#include<bits/stdc++.h>
using namespace std;

int main() {

int t;
cin>>t;
while(t--){
int n;
cin>>n;
int* arr=new int[n];
for(int i=0;i<n;i++) cin>>arr[i];
int i=0,j=n-1,count=0;
 list<int>l;
while(count!=n){
int temp=min(arr[i],arr[j]);
if(temp==arr[i]){
    i++;
    l.push_front(temp);
}else{
    j--;
    l.push_back(temp);
}
if(i==j){
   l.push_back(arr[i]);
}
count++;
}
int* arr1=new int[n];
for(int i=0;i<n;i++){
arr1[i]=l.front();
l.pop_front();
}
bool flag=false;
for(int i=0;i<n;i++){
    if(arr1[i]!=arr[i]){
     flag=true;
     break;
    }
}
if(flag) {
    int ans=-1;
    cout<<ans<<endl;
}else {
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    cout<<endl;
}
}
return 0 ;
}