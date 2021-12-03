#include<iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int a,b,A,B;
    cin>>a>>b>>A>>B;
    int p=(A/a)+(B/b);
    cout<<p<<endl;
}
return 0;
}