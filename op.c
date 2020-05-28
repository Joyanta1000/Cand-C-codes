#include<stdio.h>
main()
{int a = 6,b = 8,c = 10,d,e,f;
scanf("%d %d %d",&d,&e,&f);
if(d==a*c)
{printf("right");}
    else if(e==a*c)
    {printf("right");
    }
    else if(f==a*c)
    {printf("right");
    }
    else if(d*e*f==0)
    {printf("right");}
    else
    {printf("wrong");
    }
}
