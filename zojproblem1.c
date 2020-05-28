#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <queue>
#include <vector>
#include <stack>
#include <set>
#include <cmath>
#include <string>
#define ll long long
using namespace std;
const int N=1e5+10;
ll x,y;
int n;
int a[N];
int num[N];
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		ll sum1=0,sum2=0;
		scanf("%d%lld%lld",&n,&x,&y);
		for(int i=1;i<=100000;i++) num[i]=0;
		for(int i=1;i<=n;i++)
		{
			scanf("%d",&a[i]);
			sum1+=(ll)i*a[i];
			sum2+=(ll)i*a[i]*a[i];
			num[a[i]]++;
		}
		ll ans=0;
		if(x==sum1 && y==sum2)
		{
			for(int i=1;i<=100000;i++)
			{
				ans+=(ll)(num[i]-1)*num[i]/2;
			}
			printf("%lld\n",ans);
			continue;
		}
		if(x==sum1 || y==sum2)
		{
			printf("0\n");
			continue;
		}
		if((y-sum2)%(x-sum1)!=0)
		{
			printf("0\n");
			continue;
		}
		ll k=(y-sum2)/(x-sum1);
		ll cnt;
		for(int i=1;i<=n;i++)
		{
			ll aj=k-a[i],s=a[i]-aj;
		//	cout<<aj<<" ";
			if(s!=0 && k-a[i]>0 && (x-sum1) % s == 0)
			{
				cnt=(x-sum1)/s;
			//	cout<<cnt;
				cnt+=i;

				if(cnt<=n && cnt>i &&a[cnt]==aj) ans++;

			}
		//	cout<<endl;
		}
		printf("%lld\n",ans);
	}

    return 0;
}
