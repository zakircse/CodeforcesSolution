#include<stdio.h>
int main()
{
    int c=0,n;
    scanf("%d",&n);
    c=c+n/5;
    n=n%5;

    c=c+n/4;
    n=n%4;

    c=c+n/3;
    n=n%3;

    c=c+n/2;
    n=n%2;

    c=c+n/1;
    n=n%1;
    printf("%d",c);

    return 0;
}
