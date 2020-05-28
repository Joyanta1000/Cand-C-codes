#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int r = 0;
	int originalN;
	
	int i,q,n,m,t,reversedN = 0,remainder;
	
	//cin>>q>>n;
	
	for(i=2002;i<=10000;i++)
	{
		originalN = i;
		t = i;
		while(t!=0)
	{
	remainder = t % 10;
    reversedN = reversedN * 10 + remainder;
    t /= 10;
	}
		if (originalN == reversedN)
	{
		 	cout<<reversedN<<endl;
	}
	}
}
