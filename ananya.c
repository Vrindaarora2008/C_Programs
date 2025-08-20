#include<stdio.h>
int main()
{
    int x=0,y=0,z=0;
    int vote;
    printf("Enter the value 1 for x\n");
    printf("Enter the value 2 for y\n");
    printf("Enter the value 3 for z\n");
    printf("Enter value of vote");
    scanf("%d", &vote);
   switch(vote)
   {
    case 1:
    x+=1;
    printf("For candidate 1%d", x);
    break;
    case 2:
    y+=1;
    printf("For candidate 2%d", y);
    break;
    case 3:
    z+=1;
    printf("For candidate 3%d", z);
    break;
    default :
    printf("Invalid");
   }
    return 0;
}