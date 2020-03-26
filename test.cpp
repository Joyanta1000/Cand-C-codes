#include<bits\stdc++.h>
using namespace std;
main()
{
	int a[100],t=0,s,temp[100], ans=0;
	int i,n,count = 0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp[i] = a[i];
				a[i] = a[j];
				a[j] = temp[i];
				j = j-1; 
			}
		}
	}
	for(i=0;i<n;i++)
	{
		t = t + a[i];
	}
	s = t/2;
	while(ans<=s)
	{
		count++;
		ans = ans + a[n-count];
	}
	printf("%d",count);
	
}
