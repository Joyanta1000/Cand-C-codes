#include<stdio.h>
#include<string.h>
main()
{
    int a[10000];
    int b[10000];
    int c[10000];
    int i,j,n;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<b[i])
        {
        printf("<\n");
        }
        if(a[i]>b[i])
        {
        printf(">\n");
        }
        if(a[i]==b[i])
        {
        printf("=\n");
        }
    }
}
