#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>

using namespace std;

int main()
{
	char a[100];
	int i,n,j,len,count[100];
	
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	cin>>a[i];
	}
	for(i=0;i<n-1;i++)
	{
		count[i] = 0;
		for(j=1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count[i]++;
			}
			//cout<<a[j];
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<count[i]<<endl;
	}
}
