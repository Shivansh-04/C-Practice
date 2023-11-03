// !program to print sum of n number using do while loop

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 10;
    int i = 1;
    int sum = 0;

    do
    {
        sum+=i;
        i++;
    } while (i <= n);
    printf("%d\n", sum);
    
    return 0;
}
