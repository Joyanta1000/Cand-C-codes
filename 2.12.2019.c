#include<stdio.h>
#include<string.h>
int main()
{
    char x,y,z,u,v;
    char x1,y1,z1,u1,v1;
    double a,b,c,d,e;
    double a1,b1,c1,d1,e1;
    int i,j,n;

printf("1st set\n");
        //scanf("%c",&x);
        getc(x);
        scanf("%lf",&a);
        //gets(x);
        //scanf("%c",&y);
        gets(y);
        scanf("%lf",&b);
        //scanf("%c",&z);
        gets(z);
        scanf("%lf",&c);
        //gets(x);
        //scanf("%c",&u);
        gets(u);
        scanf("%lf",&d);
        //gets(x);
        //scanf("%c",&v);
        gets(v);
        scanf("%lf",&e);


printf("2nd set\n");
        //scanf("%c",&x1);
        gets(x1);
        scanf("%lf",&a1);
        //scanf("%c",&y1);
        gets(y1);
        scanf("%lf",&b1);
        //scanf("%c",&z1);
        gets(z1);
        scanf("%lf",&c1);
        //scanf("%c",&u1);
        gets(u1);
        scanf("%lf",&d1);
        //scanf("%c",&v1);
        gets(v1);
        scanf("%lf",&e1);

        /*
printf("The set\n\n");

printf("Equality\n\n");

 printf("{");
    if(a==a1)
    {
        printf("(a,");
        printf("%.1lf),",a);
    }
    if(b==b1)
    {
        printf("(b,");
        printf("%.1lf),",b);
    }
    if(s==s1)
    {
        printf("(s,");
        printf("%.1lf),",s);
    }
    if(d==d1)
    {
        printf("(d,");
        printf("%.1lf),",d);
    }
    if(e==e1)
    {
        printf("(e,");
        printf("%.1lf),",e);
    }
    if(a!=a1)
    {
        printf("(a,");
        printf("%.1lf),",a);
        printf("(a,");
        printf("%.1lf),",a1);
    }
    if(b!=b1)
    {
        printf("(b,");
        printf("%.1lf),",b);
        printf("(b,");
        printf("%.1lf),",b1);
    }
    if(s!=s1)
    {
        printf("(s,");
        printf("%.1lf),",s);
        printf("(s,");
        printf("%.1lf),",s1);
    }
    if(d!=d1)
    {
        printf("(d,");
        printf("%.1lf),",d);
        printf("(d,");
        printf("%.1lf),",d1);
    }
    if(e!=e1)
    {
        printf("(e,");
        printf("%.1lf),",e);
        printf("(e,");
        printf("%.1lf)",e1);
    }

    printf("}\n\n"); */


    printf("\n\nUnion\n\n");
printf("{");
if(x=='a'&& x1=='a'){
    if (a>a1)
    {

     printf("(a,");
        printf("%.1lf),",a);
    }
    if (a<a1)
    {
         printf("(a,");
        printf("%.1lf),",a1);
    }
     if (a==a1)
    {
         printf("(a,");
        printf("%.1lf),",a1);
    }
}
if(y=='b'&&y1=='b'){
    if (b>b1)
    {
         printf("(b,");
        printf("%.1lf),",b);
    }
     if (b<b1)
    {
         printf("(b,");
        printf("%.1lf),",b1);
    }
     if (b==b1)
    {
         printf("(b,");
        printf("%.1lf),",b1);
    }
}
if(z=='c'&&z1=='c'){
    if (c>c1)
    {
         printf("(c,");
        printf("%.1lf),",c);
    }
     if (c<c1)
    {
         printf("(c,");
        printf("%.1lf),",c1);
    }
     if (c==c1)
    {
         printf("(c,");
        printf("%.1lf),",c1);
    }
}
if(u=='d'&&u1=='d'){
    if (d>d1)
    {
         printf("(d,");
        printf("%.1lf),",d);
    }
      if (d<d1)
    {
         printf("(d,");
        printf("%.1lf),",d1);
    }
     if (d==d1)
    {
         printf("(d,");
        printf("%.1lf),",d1);
    }
}
if(v=='e'&&v1=='e'){
    if (e>e1)
    {
         printf("(e,");
        printf("%.1lf)",e);
    }

    if (e<e1)
    {
         printf("(e,");
        printf("%.1lf)",e1);
    }
    if (e==e1)
    {
         printf("(e,");
        printf("%.1lf)",e1);
    }
}




printf("}\n\n");


    printf("Intersection\n\n");
printf("{");
    if (a<a1)
    {

     printf("(a,");
        printf("%.1lf),",a);
    }
    if (a>a1)
    {
         printf("(a,");
        printf("%.1lf),",a1);
    }
    if (a==a1)
    {
         printf("(a,");
        printf("%.1lf),",a1);
    }

    if (b<b1)
    {
         printf("(b,");
        printf("%.1lf),",b);
    }
     if (b>b1)
    {
         printf("(b,");
        printf("%.1lf),",b1);
    }
      if (b==b1)
    {
         printf("(b,");
        printf("%.1lf),",b1);
    }

    if (c<c1)
    {
         printf("(c,");
        printf("%.1lf),",c);
    }
     if (c>c1)
    {
         printf("(c,");
        printf("%.1lf),",c1);
    }
     if (c==c1)
    {
         printf("(c,");
        printf("%.1lf),",c1);
    }

    if (d<d1)
    {
         printf("(d,");
        printf("%.1lf),",d);
    }
      if (d>d1)
    {
         printf("(d,");
        printf("%.1lf),",d1);
    }
      if (d==d1)
    {
         printf("(d,");
        printf("%.1lf),",d1);
    }

    if (e<e1)
    {
         printf("(e,");
        printf("%.1lf)",e);
    }

    if (e>e1)
    {
         printf("(e,");
        printf("%.1lf)",e1);
    }
     if (e==e1)
    {
         printf("(e,");
        printf("%.1lf)",e1);
    }

    printf("}\n\n");

}
