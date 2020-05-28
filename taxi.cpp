#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[100], b[100], n, i, count = 0;
	
	cin>>n;
	
	for(i=1;i<=n;i++)
	
	{
		cin>>a[i];
	}
	
	for(i=1;i<n;i++)
	
	{
		if(a[i]<=4)
		{
		b[i] = a[i]+a[i+1];
		if(b[i]<=4)
		{
		count++;
		a[i] = a[i+2];
		}
		}
	}
	
	cout<<count<<endl;
}
