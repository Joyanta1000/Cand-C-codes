#include<bits/stdc++.h>
using namespace std;
int main()
{
	double xmax, xmin, ymax, ymin, x, y;
	printf("XMAX => ");
	scanf("%lf",&xmax);
	printf("XMIN => ");
	scanf("%lf",&xmin);
	printf("YMAX => ");
	scanf("%lf",&ymax);
	printf("YMIN => ");
	scanf("%lf",&ymin);
	printf("X => ");
	scanf("%lf",&x);
	printf("Y => ");
	scanf("%lf",&y);
	if(x<=xmax && x>=xmin && y<=ymax && y>=ymin)
	{
		printf("Visible");
	}
	else
	{
		printf("Not visible");
	}
}
