#include<stdio.h>
int board[4][4]={0,0,0,0,0,2,3,5,0,5,3,2,0,3,2,5};
void initial_board()
{
    int i=0,j=0;
    for(i=1;i<=3;i++)
        for(j=1;j<=3;j++)
        board[i][j]=2;
}

void print_board()
{
    int i,j;
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++)
        if(j==3){
            if(board[i][j]==2)
                 printf(" ");
        else if (board[i][j]==3)
            printf("X");
        else if (board[i][j]==5)
            printf("0");

        }
        else{
             if(board[i][j]==2)
                 printf("   |");
        else if (board[i][j]==3)
            printf("X |");
        else if (board[i][j]==5)
            printf("0 |");
        }
        if(i!=3)
            printf("\n------------------\n");
            //printf("%d",board)
}}
 main()
{

    int choice=0;
    while(1)
    {

    printf("\nEnter 1  initialize board ");
    printf("\nEnter 2 for print board ");
    printf("\nEnter 100 for exit program ");
    scanf("%d",&choice);
    if (choice==100)
        break;
    switch(choice)
    {
        case 1:initial_board(); break;
        case 2: print_board(); break;
        default : printf("\n Your Choice is Wrong !!!");
    }
}
}
