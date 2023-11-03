#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Program to print sum of 2  number");
    int a,b;
    printf("Enter number a-> ");
    scanf("%d",&a);

    printf("Enter number b-> ");
    scanf("%d",&b);

    int sum = a+b;
    
    printf("the sum is %d", sum);
    return 0;
}
