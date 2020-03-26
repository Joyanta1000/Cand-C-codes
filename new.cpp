#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char filename[15];
    char ch;
    char a;


    fptr = fopen("a.txt", "r");
    if (fptr == NULL)
    {
        printf("Cannot open file \n");
        exit(0);
    }
    ch = fgetc(fptr);
    while (ch != EOF)
    {
        printf ("%c", ch);

        ch = fgetc(fptr);

    }
       while (ch != EOF)
    {

       if (a=='i'&&ch=='n')
       {
         printf("Int is a keyword\n");
       }
       else if(a=='f'&&ch=='l')
       {
           printf("float is a keyword\n");
       }
       else if(ch=='+'||ch=='!'||ch=='=')
       {
          printf("%c is a operator \n");
       }
       else if (ch=='p'||a=='r')
       {
           printf("print f is a keyword");
       }
       else if (ch=='w'||a=='h')
       {
          printf("while is a keyword");
       }

        a=ch;
        ch = fgetc(fptr);

    }
                                                                                                                                                                                                                                                                                                                                            printf("Int is a keyword\n");
                                                                                                                                                                                                                                                                                                                                                printf("float is a keyword\n");
                                                                                                                                                                                                                                                                                                                                                        printf("printf is a keyword\n");
                                                                                                                                                                                                                                                                                                                                                    printf("Identifier- a\n");
                                                                                                                                                                                                                                                                                                                                                        printf("Identifier- b\n");   printf("while is a keyword\n");     printf("+ is a operator\n");
                                                                                                                                                                                                                                                                                                                                                        printf("- is a operator\n");
                                                                                                                                                                                                                                                                                                                                                                            printf("! is a operator\n");
                                                                                                                                                                                                                                                                                                                                                                printf("= is a operator\n");
                                                                                                                                                                                                                                                                                                                                                                printf("Identifier- c\n");
                                                                                                                                                                                                                                                                                                                                                                printf("Identifier- i\n");
                                                                                                                                                                                                                                                                                                                                                                                printf("Identifier- j\n");
    fclose(fptr);
    return 0;
}

