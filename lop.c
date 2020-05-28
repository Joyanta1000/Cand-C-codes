#include<stdio.h>
int main(){
    long long int a,b;
    while(scanf("%lld %lld",&a,&b)!=EOF)
    {
    if(a<b)
    {
        printf("%lld",b-a);
    }
    else
    {
        printf("%lld",a-b);
    }
    }
    return 0;
}
