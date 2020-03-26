#include<stdio.h>
main()
{
    int a[100],b[100],c[100],g,n,i,temp1=0,temp2=0,temp3=0,op = 0, count = 1;
    scanf("%d",&n);
    //scanf("%d",&b);
    for(i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
       temp1+=a[i];
       //scanf("%d",&b[i]);
       //temp2+=b[i];
       //scanf("%d",&c[i]);
       //temp3+=c[i];
    }
    //for(i=0;i<n;i++)
    //{
   scanf("%d",&g);

            if(g<=temp1)
            {
           // temp1 =  op+=g;
           g = g - temp1;
           op = op +g;
            }
             if(g<=temp2)
                {
           g = g - temp2;
           op = op +g;
            }
             if(g<=temp3)
            {
            temp3 =  op+=g;
            op = op +g;
            }
        printf("%d",op);
   // }

}
