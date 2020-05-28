#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x[1000];
	int y[1000];
	int n,p[1000],i;
int count=0;
int c=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	
			scanf("%d %d",&x[i],&y[i]);	
			scanf("%d",&p[i]);
		while(x[i]>y[i])
		{	
				while (x[i]>y[i])
		{
		
			x[i]=x[i]-p[i];
				 
		}
		
		if(x[i]>y[i])
				{
					
					printf("no");
				
				}
				else
				{
					printf("yes");
				
				}
		
	}
}
	
}
