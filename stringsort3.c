
#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100], Str2[100];
  	int result, i;
int n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
    scanf("%s", &Str1);
}
  	for(i = 0; Str1[i] == Str1[i+1] && Str1[i] == '\0'; i++);

printf("%s",Str1[i]);

  	return 0;
}
