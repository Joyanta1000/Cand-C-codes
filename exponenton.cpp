# include <stdio.h>
# include <string.h>
# include <stdlib.h>

main()
{
 int i,j,k,n,m,mm,len,mark,flag,sig,point,radio;
 char tmp,num[20],output[10000],temp[10000];
 
 while(scanf("%s%d",&num,&n)!=EOF)
 { 
   mark = 0;flag = 0;sig = 0;
   
   point = 0;m = n;
   for(i = 0; num[i] != '\0'; i++)
   if(num[i] == '.') 
   { sig = 1;
     point = strlen(num)-i-1;
     for(j = i+1; num[j] != '\0'; j++)
     if(num[j] != '0'){flag = 1; break;}
     num[i] = '\0';if(flag)strcat(num,&num[i+1]);
     break;}
   len = strlen(num);
   for(i = 0; i < len/2; i++)
   {
     tmp = num[i] ;
     num[i] = num[len-i-1];
     num[len-i-1] = tmp;
   }
     i = 0;
     if(num[0] == '0')
      {
        
         while(num[i] == '0')
           i++;
          mark = i;      
      } 
     strcpy(output,num);
     while(--n)
     {
     for(k = 0; k < 10000; k++)
       temp[k] = '0';
        for(i = 0; i < len; i++)
         {
          for(j = 0; j < strlen(output); j++)
           {
             radio = ((int)num[i]-48)*((int)output[j]-48);
             if((int)(temp[j+i])+radio%10-48>=10)
               {
                 temp[j+i] = (int)temp[j+i]+radio%10-10;
                   k = i+j;
                 while(1)
                  {
                   if(temp[k+1] < '9') {temp[k+1]++;break;}
                   if(temp[k+1] == '9') {temp[k+1] = '0';k++;}
                  }
                }
                else temp[j+i] += radio%10;

             if((int)(temp[j+i+1])+radio/10-48>=10)
               {
                 temp[j+i+1] = (int)(temp[j+i+1])+radio/10-10;
                   k = i+j+1;
                   while(1)
                   {
                     if(temp[k+1] < '9') {temp[k+1]++;break;}
                     if(temp[k+1] == '9') {temp[k+1] = '0';k++;}
                   }
                }
                else  temp[j+i+1] += radio/10;

           } 
         }
         if(temp[i+j-1] != '0') k = i + j+1 ;
           else k = i + j ;
         for(; ;k++)if(temp[k] == '0') {temp[k] = '\0';break;}
         strcpy(output,temp);
    }
     if(sig&&flag)for(i = 0; ;i++) if(output[i] != '0') {strcpy(output,&output[i]);break;}
     if(num[strlen(num)-1] != '0') 
       {
        for(i = strlen(output)-1; ;i--)
          if(output[i] != '0')
            {output[i+1] = '\0';break;}
        }
     mm = 0;
   for(i = strlen(output)-1; i >= 0; i-- )
      {if(output[i] != '0'||mm){mm = printf("%c",output[i]);};if(i == (point-mark)*m&&flag)mm = printf(".");}
     if(!mm) printf("1"); printf("\n");
 }
    return 0;
}
