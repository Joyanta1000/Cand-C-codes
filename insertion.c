#include<stdio.h>
int main()
{
    int a[10];
    int i,j,n,temp=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
       j=i-1;
       if(a[i]<a[j]&&j>=0)
       {
           temp = a[j];
           a[j] = a[i];
           a[i] = temp;
           a[i+1] = a[i];
       }
       else
       {
           a[j+1]=a[i];
       }
    }
for (i=0;i<n;i++)
{
    printf("%d",a[i]);
}
}
