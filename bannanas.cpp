#include<bits/stdc++.h>
using namespace std;
main()
{
	int i,k,n,w,total=0,t=0;
	scanf("%d",&k);
	scanf("%d",&n);
	scanf("%d",&w);
	total = total+k*(w*(w+1)/2)-n;
	if(total<=0)
	{
	printf("0");
	}
	else
	{
	printf("%d",total);
	}
}
