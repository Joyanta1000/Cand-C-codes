#include<bits/stdc++.h>
using namespace std;
main()
{
	char a[] = {"poi uzw abc hjk"};
	char temp[1000];
	int i,j,n;
	n=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp[i] = a[i];
				a[i] = a[j];
				a[j] = temp[i];
				j=j-1;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
