#include<bits/stdc++.h>
using namespace std;
main()
{
	char a[100000] = {"poi uzw abc hjk"};
	char temp[100000];
	char str[100000];
	int i,j,n,count=0;
	//n=strlen(a);
	for(i=0;a[i]=='\0';i++)
	{
		n=strlen(a);
		if(a[i]=='\0')
		{
		i = count-;
		}
				else
				{
				temp[i] = temp[i]+a[i];
				count++;
				}
		
	}
	for(i=0;temp[i]!='\0';i++)
	{
	cout<<temp<<"\n";
	}
	/*n=strlen(temp);
	for(i=n-1;i>=0;i--)
	{
		for(j=n;j>i;j--)
		{
			if(temp[i]>temp[j])
			{
				str[i] = temp[i];
				temp[i] = temp[j];
				temp[j] = str[i];
				j=j+1;
			}
		}
	}
	for(i=0;i<count;i++)
	{
		cout<<temp[i]<<"\n";
	}*/
}
