#include<bits/stdc++.h>
using namespace std;
main()
{
	char a[100];
	gets(a);
	int i;
	int count=0;
	int l = strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]=='h')
		{
			count++;
			break;
			
		}
	}
	for(i=0;i<l;i++)
	{
	
		 if(a[i]=='e')
		{
			count++;
			break;
		}
	}
	for(i=0;i<l;i++)
	{
		 if(a[i]=='l')
		{
			count++;
			break;
		}
	}
	for(i=0;i<l;i++)
	{
	     if(a[i]=='l')
		{
			count++;
			break;
		}
	}
	for(i=0;i<l;i++)
	{
		if(a[i]=='o')
		{
			count++;
		
		}
	}
	
	if(count==5)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
 } 
