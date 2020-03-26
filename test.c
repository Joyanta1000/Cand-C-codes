#include<stdio.h>
main()
{
    int a[100];
    int i,j=0;
    for(i=0;i<10;i++)
    {
        if(i%2==1)
        {
            j=j+1;
        }
    }
    for(i=0;i<10;i++)
    {
    printf("%d",j);
    j=0;
    }
}
