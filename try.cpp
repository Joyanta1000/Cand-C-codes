#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    long long int b;
    char c;
    float e;
    double g;
    scanf("%d %ld %c %f %lf",&a,&b,&c,&e,&g);
    printf("%d\n",a);
    printf("%ld\n",b);
    printf("%c\n",c);
    printf("%.3f\n",e);
    printf("%.9lf",g);
    return 0;
}
