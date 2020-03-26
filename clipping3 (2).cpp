#include<bits/stdc++.h>
using namespace std;
int main()
{
	double xmax;
	double xmin;
	double ymax;
	double ymin;
	double x;
	double y;
	printf("XMAX and YMAX\n");
	scanf("%lf %lf",&xmax,&ymax);
	printf("XMIN and YMIN\n");
	scanf("%lf %lf",&xmin,&ymin);
	printf("X and Y\n");
	scanf("%lf %lf",&x,&y);
	if(x<=xmax && x>=xmin && y<=ymax && y>=ymin)
	{
		printf("Visible");
	}
	else if(x<=xmax && x>=xmin || y<=ymax && y>=ymin)
	{
		printf("Visible & Candidate for Clipping");
	}
	else
	{
		printf("Not visible");
	}
}
