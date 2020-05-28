#include<stdio.h>
#include<string.h>

int main()
{
    char ch_arr1[20];
    char ch_arr2[20];
int i,n,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{

    printf("Enter first string: ");
    gets(ch_arr1);
    //strcpy(ch_arr1, ch_arr1);
}
for(i=0;i<n;i++)
{
    puts(ch_arr1);
    //printf("String (ch_arr_1) = %s\n", ch_arr1[i]);
    //printf("Second string (ch_arr_2) = %s\n", ch_arr2);
}
    // signal to operating system program ran fine
    return 0;
}
