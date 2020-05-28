#include<stdio.h>
#include<string.h>
void main()
{
    char a[100], b[100], c[100], temp[100];
    int i,j,n,m;
    scanf("%d", &n);
     for (i=0;i<n;i++)
        {
            scanf("%s",&a[i]);
            //strcpy(a[i],a[i]);
            //strcpy(tname[i], name[i]);
            //gets(a);
        }
        //m = strlen(a);
    for(i=0;a[i]=='\0';i++)
    {
       // for(j=i+1;j<m;j++)
    //{
        if(a[i]>a[i+1])
        {
            temp[i] = a[i];
            a[i] = a[i+1];
            a[i+1] = temp[i];
           //j = j-1;
        }
//}
    }
    for(i=0;i<n;i++)
    {
        printf("%s",a);
        printf("\n");
        //puts(a);
    }
}
