#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t;
    cin >> t;
    while (t--)
    {
     long long int n,h;
      cin >> n >> h;
      long long int *arr = new long long int[n];
      for (long long int i = 0; i < n; i++)
          cin >> arr[i];

      long long int a = 0, b = -1, count = 0;
      for (long long int i = 0; i < n; i++)
      {
          if (arr[i] > a)
              a = arr[i];
        }
        for (long long int i = 0; i < n; i++)
        {
            if(arr[i]>b && arr[i]!=a) b=arr[i];
        }
   if((h-a-b)>=(a+b)&&(a+b)!=0) {count=(h-a-b)/(a+b);
     count= count*2;
       h=(h-a-b)%(a+b) +(a+b); }   
      
      
       while(h>0){
            if(h>0) {
                h-=a;
                count++;
            }
            if(h>0){
                h-=b;
                count++;
            }
        }
        cout<<count<<endl;
        
    }
    return 0;
}