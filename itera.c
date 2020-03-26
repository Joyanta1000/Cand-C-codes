
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define tolarence_value 0.001
float fun1(float x)
{
    return (1/(sqrt(1+x)));
}
int main()
{
    float x1,x2;
    printf("Enter the value of x1: ");
    scanf("%f",&x1);
        do{
            printf("%0.4f  %0.4f\n",x1,x2);
            x2=x1;
            x1=fun1(x1);
    }while(fabs(x1-x2)>tolarence_value);
    printf("\nThe root is:%f",x2);
    return 0;
}
