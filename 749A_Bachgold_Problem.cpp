#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	cout<<n/2<<endl;
	if(n%2==0)
	{
		for(i=0;i<n/2-1;i++)
		{
			cout<<2<<" ";
		}
		cout<<2<<endl;
	}
	else if(n%2==1)
	{
		for(i=0;i<n/2-1;i++)
		{
			cout<<2<<" ";
		}
		cout<<3<<endl;
	}
	return 0;
}
