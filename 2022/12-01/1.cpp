#include<bits/stdc++.h>
using namespace std;

int main() {

int n,k;
cin>>n>>k;
string s;
cin>>s;
if(n==1){
    cout<<"PRINT\n"<<s[0]<<"\n";
} else if(n==2){
    if(k==2) cout<<"PRINT "<<s[1]<<"\nLEFT\n"<<"PRINT "<<s[0]<<"\n";
    else {
        cout<<"PRINT "<<s[0]<<"\nRIGHT\n"<<"PRINT "<<s[1]<<"\n";
    }
}
   else if(k>(n+1)/2 && n>2){
    for(int i=k;i<n;i++){
     if(k!=n)   cout<<"RIGHT\n";
    }
    for(int i=n-1;i>=0;i--){
        cout<<"PRINT "<<s[i]<<"\n";
        if(i!=0)cout<<"LEFT\n";
    }
} else {
    for(int i=k;i>1;i--){
   if(k!=1) cout<<"LEFT\n";
    }
    for(int i=0;i<n;i++){
        cout<<"PRINT "<<s[i]<<"\n";
        if(i!=n-1)cout<<"RIGHT\n";
    }
}
return 0 ;
}