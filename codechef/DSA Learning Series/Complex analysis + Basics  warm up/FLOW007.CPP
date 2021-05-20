#include <iostream>
using namespace std;

int main() {
	
	int T,N;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N;
	    bool L=true;//FOR ANY LEADING ZERO IN THE NUMBER AFTER REVERSAL
	while(N>0)
	{
	   if(N%10==0 && L) 
	   {
	       N/=10;
	       continue;
	   }
	   L=false;
	   cout<<N%10;
	   N/=10;
	    
	}
	cout<<endl;
	}
	return 0;
}