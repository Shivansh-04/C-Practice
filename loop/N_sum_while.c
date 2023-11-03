//!  program to print sum of n numner using while loop

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 10;
    int i = 1;
    int sum = 0;

    while (i <= n)
    {
        // i = i + 1;
        sum+=i;
        // printf("%d", i+=1);
        i++;
    }
    printf("%d", sum);
    
    return 0;
}
