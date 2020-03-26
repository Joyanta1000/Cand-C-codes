#include<stdio.h>
int main()
{
    int i,k=0,n,w=0,b;

    scanf("%d",&b);

    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
        if(w!=b)
        {
            if(w>b)
            {
                break;
            }
            else
                {
            w = w + i;
            k++;
                }
        }

    }

    printf("%d",k);
}
