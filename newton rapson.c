
#include<stdio.h>
#include<math.h>
#define f(x) x*x*x-3*x-5
#define fd(x) 3*x*x-3
#define E 0.0001
void main()
{

float x0,x1,f0,fd0,e;
printf("\t\t\t-----Newton-Raphson Method----");
printf("\n\n Finding Root Of x^3-3x-5");
printf("\n Enter the initial value:");
scanf("%f", &x0);
printf("\n f(x0)\t\t fd(x0)\t\t x1\t\t Error");
printf("\n-------------------------------------");
begin:
f0=f(x0);
fd0=fd(x0);
x1=x0- (f0/fd0);
e=fabs((x1-x0)/x1);
if(e<E)
{
    printf("\n\n Approximate Root= %.5f", x1);
}
else
{
    printf("\n %.2f\t\t %.3f\t\t %.3f\t\t %.4f", f(x0),fd(x0),x1,e);
    x0=x1;
    goto begin;
}
}
