#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
	cin>>n>>k;
	int a[n],b[n];
    int sum=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[n];
	}
	b[n]=a[n];
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{
			if(b[i]%k==b[j]%k)
			{
				b[i]++;
				b[j]++;
			}
		}
	}
    for(int i=0;i<n;i++)
    {
        sum=sum+(b[i]-a[i]);
    }
    cout<<sum<<endl;
	return 0;
