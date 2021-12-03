#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    int d,c;
    cin>>d>>c;
    int a1,a2,a3;
    int b1,b2,b3;
    cin>>a1>>a2>>a3;
    cin>>b1>>b2>>b3;
    int a=a1+a2+a3;
    int b=b1+b2+b3;
    int sum1=(2*d);
    int sum2=c;
    if(a<150 && b<150)
    {
       sum2=(2*d)+c;
    }
    else if(a<150 || b<150)
    {
       
        sum2=d+c;
    }
    else{
        
        sum2=c;
    }
    if(sum1>sum2)
    {
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

return 0;
}