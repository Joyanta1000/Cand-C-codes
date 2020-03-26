
#include<stdio.h>
main()
{
    int a[100],b[100],c[100],g,n,i,temp1=0,temp2=0,temp3=0,op = 0,total, count = 1;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);

    }
      scanf("%d",&g);

      for(i=0;i<g;i++)
      {
          if(g<=a[i])
          {
              printf("%d",g);
          }
          else
        {
            g = g-a[i];
            printf("%d\n",g);
        }
      }
}
