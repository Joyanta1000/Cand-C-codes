#include<stdio.h>
#include<math.h>
#define tol .0001
float g(float x)
{

    return 1/(sqrt(1+x));
}
int main()
{

    int i=1;
    float x,x1,x2;
    printf("Enter the value of x1\n");
    scanf("%f", &x1);
    printf("x1\t\t  x2\t\t  g1\n");
    do{
        x2=x1;
        x1=g(x1);
        i++;
        printf("%f\t %f\t %f\n",x2,x1,g(x1));

    }
    while(fabs(x1-x2)<tol);
    printf("i=%d\n x1=%f",i,x1);
    return 0;
}



