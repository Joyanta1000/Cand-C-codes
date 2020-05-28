#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
	
	int  i, j, x, y, len;
	
	cin>>x>>y;
	
	char a[x], temp;
	
	cin>>a;
	
	len = strlen(a);
	while(y--)
	{
	for(i=0;i<len-1;)
	{
		if(a[i]=='B'&&a[i+1]=='G')
		{
			temp = a[i];
			a[i] = a[i+1];
			a[i+1] = temp;
			i+=2;
		}
		else
		{
			i++;
		}
	}
	}
	
	cout<<a;
}
