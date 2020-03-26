#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd = DETECT,gm,color;
    char arr[50];
    initgraph(&gd,&gm,"");
    color = getpixel(0,0);
    sprintf(arr,"%d",color);
    outtext(arr);
    getch();
    closegraph();
    return 0;
}
