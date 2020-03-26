#include<stdio.h>
#include<math.h>
main()
{
    int n[5000];
    int m[5000];
    int l[5000],a,i;
    int p[5000];
    int sum[5000];
    int result[5000];
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
    scanf("%d",&n[i]);
    scanf("%d",&m[i]);
    p[i] = pow(n[i],m[i]);
    }
    for(i=1;i<=p[i];i++)
    {

        if(p[i]%i==0)
        {
        l[i]=i;
        sum[i] = sum[i] + l[i];

        }

    }
    for(i=1;i<=a;i++)
    {
      result[i] = (sum[i]%1000000007);
            printf("%d",result[i]);
    }

}
