#include<stdio.h>
int main()
{
    int N, bill;
    printf("Enter a number\n");
    scanf("%d", &N);
    if(N<=100)
    {
        printf("PRINT");
    }
    if(N>100 && N<=200)
    {
        bill=(N-100)*1;
        printf("%d", bill);
    }
    if(N>200 && N<=300)
    {
        bill=((N-200)*2)+100;
        printf("%d", bill);
    }
    if(N>300 && N<=400)
    {
        bill=((N-300)*4)+300;
        printf("%d", bill);
    }
    if(N>400)
    {
        bill=((N-100)*6)+700;
        printf("%d", bill);
    }
    return 0;
}