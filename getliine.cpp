#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

int main()
{
	int i,n;
	string a[1000];
	
	cin>>n;
	for(i=0;i<=n;i++)
	{
		getline(cin,a[i]);
	}
	
	for(i=0;i<=n;i++)
	{
		cout<<a[i]<<"\n";
	}
}
