// ! program to calculate sum of table

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num =3;
    int sum = 0;

    for (int i = 1; i <= 10; i++)
    {
        int mul = num * i;
        sum+= mul;
        // printf("%d ", num * i);
    }
    printf("%d ", sum);

    
    return 0;
}
