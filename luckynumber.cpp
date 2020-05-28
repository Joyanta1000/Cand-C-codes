#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
	char a[1000], i;
	int c = 0;
	cin>>a;
	int n = strlen(a);
	cout<<n<<endl;
	for(i=0;i<n;i++)
	{
		if(a[i]==1||a[i]==2||a[i]==3||a[i]==5||a[i]==6||a[i]==8||a[i]==9)
	{
		//c++;
		//break;
		cout<<a[i]<<endl;
	}
	}
	/*if(c>0)
	{
		cout<<"NO";
	}
	else
	{
		cout<<"YES";
	}*/
}
