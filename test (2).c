#include<stdio.h>
#include<string.h>
int main()
{
    char x[10];
    float a[10];
    char y[10];
    float b[10];
    int i,j,n,m;
    printf("Step\n");
    scanf("%d",&n);
    printf("Step2\n");
    scanf("%d",&m);
    printf("For the first set\n");
    for(i=0;i<n;i++)
    {
            scanf("%c %f",&x[i],&a[i]);
    }
    printf("For the second set\n");
    for(i=0;i<m;i++)
    {
             scanf("%c %f",&y[i],&b[i]);
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        if(x[i]==y[j])
        {
            a[i] = 1-a[i];
            if(a[i]<b[j])
            {
                printf("%c,",x[i]);
                printf("%f",a[i]);
                break;
            }
            else if(a[i]<b[j])
            {
                printf("%c,",y[j]);
                printf("%f",b[j]);
                break;
            }
             else if(a[i]==b[j])
            {
                printf("%c,",y[j]);
                printf("%f",b[j]);
                break;
            }
        }
        }

        //printf("%c",y[i]);
        //printf("%c",b[i]);
    }

    //  for(i=0;i<=n+1;i++)
    //{
       // printf("%c",y[i]);
       // printf("%c",b[i]);
    //}
}
