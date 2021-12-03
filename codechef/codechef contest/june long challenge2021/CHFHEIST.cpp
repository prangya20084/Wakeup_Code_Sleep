//a arithmatic sum problem
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    
    ios_base::sync_with_stdio(false); //used to stop syncronization and make cin more faster than scanf() to get faster I/o //
    cin.tie(NULL);   //for more details visit https://www.geeksforgeeks.org/fast-io-for-competitive-programming/
      int T;
      cin>>T;
      while(T--)
      {
          long int D,d,p,q,sum=0;
          cin>>D>>d>>p>>q;
          int n=D/d;
         sum=(p*n+(q*(n-1)*(n)/2))*d;
          
          if(D%d!=0)
          sum+=(D%d)*(p+n*q);
          
          cout<<sum<<endl;
      }
    
}