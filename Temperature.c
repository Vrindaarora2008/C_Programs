/*Q5: Write a program to convert temperature from Celsius to Fahrenheit.
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212
*/
#include<stdio.h>
int main()
{
    float F,C;
    printf("Enter the temperature in Celsius\n");
    scanf("%f", &C);
    F=((9.0/5.0)*C)+32.0;
    printf("The temperature is-%f", F);
    return 0;
}