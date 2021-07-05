#include <bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;


int main() {



   long long n;

   cin>>n;

   long long a[n];

   long long i,j, sum=0;

   for(i=0; i<n; i++)

   {

      cin>>a[i];

   }


   for(i=0; i<n; i++)

   {

      for(j=0; j<n; j++)

      {

          long long count = 0;

          long long x = a[i]^a[j];

          while(x>0)

          {

              count = count + (x&1);

              x>>=1;

          }

          sum+=count;

      }

   }

   cout<<sum%mod;



   return 0;

}


