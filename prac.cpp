#include<stdio.h>
#include<string.h>
 main()
{
	//char a[100];
	//char temp[100];
	int a[]={2,6,8,9,1};
	int i,j;
	//int count=1;
		//scanf("%d",&a);
//	scanf("%s",&a);
	//int l = strlen(a);
//	for(i=0;i<l-1;i++)
int n = 5;
for(i=0;i<n;i++)
	{
//			char key=a[i];
//int key=a[i];
		while(a[i]<a[i-1])
		{	
		a[i+1]=a[i-1];
	i=i-1;
	}
		a[i+1]=a[i];
//	if(a[i]!=a[i+1])
//	{
//	count++;
//	}
}
//	if(count%2==1)
//	{
//		printf("IGNORE HIM!");
//	}
//	else
//	{
//		printf("CHAT WITH HER!");
//	}
for(i=0;i<n;i++)
{
	printf("%d",a[i+1]);
}
}
