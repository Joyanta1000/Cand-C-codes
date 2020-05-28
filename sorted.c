#include<stdio.h>
#include<string.h>
void main()
{
    char temp[100];
    char a[100];
    int i,j,n;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
           //break;
        }
        else
        {
            printf("%s",a);
            i = i-1;
        }
    }
}
