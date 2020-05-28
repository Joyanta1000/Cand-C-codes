#include <stdio.h>
#include <stdlib.h> // For exit() function
#include<string.h>
int main() {
    char c[1000];
    int i,j;
    FILE *fptr;
    if ((fptr = fopen("C:\\Users\\Joyanta Dutta\\Desktop\\program.txt.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);
    }
    // reads text until newline is encountered
    fscanf(fptr, "%[^\n]", c);
    int strlength = strlen(c);
    printf("%d\n",strlength);
    
    for(i=0;i<strlength;i++)
    {
    	//printf("%c\n",c[i]);
    		if(c[i]=='A'||c[i]=='B'||c[i]=='C'||c[i]=='D'||c[i]=='E'||c[i]=='F'||c[i]=='G'||c[i]=='H'||c[i]=='I'||c[i]=='J'||c[i]=='K'||c[i]=='L'||c[i]=='M'||c[i]=='N'||c[i]=='O'||c[i]=='P'||c[i]=='Q'||c[i]=='R'||c[i]=='S'||c[i]=='T'||c[i]=='U'||c[i]=='V'||c[i]=='W'||c[i]=='X'||c[i]=='Y'||c[i]=='Z')
    	{
    		printf("%c is an alphabet\n",c[i]);
		}
    	if(c[i]=='a'||c[i]=='b'||c[i]=='c'||c[i]=='d'||c[i]=='e'||c[i]=='f'||c[i]=='g'||c[i]=='h'||c[i]=='i'||c[i]=='j'||c[i]=='k'||c[i]=='l'||c[i]=='m'||c[i]=='n'||c[i]=='o'||c[i]=='p'||c[i]=='q'||c[i]=='r'||c[i]=='s'||c[i]=='t'||c[i]=='u'||c[i]=='v'||c[i]=='w'||c[i]=='x'||c[i]=='y'||c[i]=='z')
    	{
    		printf("%c is an alphabet\n",c[i]);
		}
			if(c[i]=='~'||c[i]=='`'||c[i]=='!'||c[i]=='@'||c[i]=='#'||c[i]=='$'||c[i]=='%'||c[i]=='^'||c[i]=='&'||c[i]=='*'||c[i]==')'||c[i]=='('||c[i]=='_'||c[i]=='-'||c[i]=='+'||c[i]=='='||c[i]=='}'||c[i]=='{'||c[i]==':'||c[i]==';'||c[i]=='"'||c[i]=='"'||c[i]=='<'||c[i]=='>'||c[i]==','||c[i]=='.'||c[i]=='/'||c[i]=='?')
    	{
    		printf("%c is an operator\n",c[i]);
		}
			if(c[i]=='0'||c[i]=='1'||c[i]=='2'||c[i]=='3'||c[i]=='4'||c[i]=='5'||c[i]=='6'||c[i]=='7'||c[i]=='8'||c[i]=='9'||c[i]=='10'||c[i]=='11')
		{
    		printf("%c is a number\n",c[i]);
		}
	}
    printf("Data from the file:\n%s", c);
    fclose(fptr);
    return 0;
}

