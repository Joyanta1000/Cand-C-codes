#include<stdio.h>
#include<string.h>
int main()
{
int a;
int i,j,count=0;
char **n;
int m;

scanf("%d",&a);
 n= malloc(sizeof(char*)*a);
 for(i=0;i<a;i++)
 {
     n[i] = malloc(sizeof(char)*50);
     scanf("%s",n[i]);
 }
 m = strlen(n);

 for(i=0;i<m;i++)

  {
     for(j=i+1;j<m;j++)
     {

         if(n[i]==n[j])
         {
             count++;
         }
     }

 }

for(i=0;i<n;i++)
{
    printf("%d",count);
}

 //for(i=0;i<a;i++)
 //{

    //free(n[i]);
 //}
 //free(n);
 return 0;
}
