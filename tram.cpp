#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,n;
	int a[1000];
	int b[1000];
	int ans,max=0,k;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
     k=a[0];
	for(i=0;i<n;i++)
	{
		ans = b[i]-a[i]+k;
		k=ans;
		if(ans>max)
		{
			max=ans;
		}
	}
	printf("%d",max);
}
