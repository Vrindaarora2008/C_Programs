#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c", &ch);
    if(ch>='A' && ch<='Z')
    {
    ch+=32;
    printf("Small is %c", ch);
}
if(ch>='a' && ch<='z')
{
    ch-=32;
    printf("Big is %c", ch);
}
return 0;
}