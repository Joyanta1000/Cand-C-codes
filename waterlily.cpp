#include<bits/stdc++.h>
using namespace std;
int main()
{
	double h,l,ans;
	scanf("%lf %lf",&h,&l);
	ans = ((l*l)-(h*h))/(2*h);
	printf("%.15lf",ans);
}
