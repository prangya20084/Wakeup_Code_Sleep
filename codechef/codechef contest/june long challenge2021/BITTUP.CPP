#include <bits/stdc++.h>
using namespace std;
long long binpow(long long a, long long b, long long m) //binary exponentiation
{
    a %= m;
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}
  int power(long long x, unsigned int y, int p) //modulo power exponentiation
{
    int res = 1;     
 
    x = x % p; 
  
    if (x == 0) return 0; 
 
    while (y > 0)
    {
        
        if (y & 1)
            res = (res*x) % p;
 
       
        y = y>>1;
        x = (x*x) % p;
    }
    return res;
}
int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);   
     int t;
     cin>>t;
     while(t--)
     {
         long long int n,m;
         cin>>n>>m;
         int p=binpow(2,n,1000000007)-1;
         cout<<power(p,m,1000000007)<<endl;
     } 
    
}