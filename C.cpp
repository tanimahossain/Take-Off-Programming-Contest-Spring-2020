#include<stdio.h>

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;

    int ans=(a*b*c*d)%100;

    if(ans<25) printf("level 0\n");
    else if(ans<50) printf("level 1\n");
    else if(ans<75) printf("level 2\n");
    else printf("level 3\n");
    return 0;
}
