#include <stdio.h>
#include <string.h>
#include <math.h>>
int main()
{
int a[100];
int i,n,b,x1=0,x2=0,x3=0;
scanf("%d",&n);
for (i=0;i<n;i++)
{
    scanf("%d %d %d",&a[i],&a[i+1],&a[i+2]);

  x1+=a[i];
  x2+=a[i+1];
  x3+=a[i+2];


}

if(x1==0&&x2==0&&x3==0)
{
    printf("YES");
}
else
{
    printf("NO");
}

}
