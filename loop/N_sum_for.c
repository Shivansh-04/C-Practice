// !WAP print sum of n natural number

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n ;
    scanf("%d", &n);
    // int i = 1;
    int sum = 0;

    for (int i = 1; i <= n; i++)
    {
        sum+=i;
    }
    printf("%d\n",sum);
    
    return 0;
}
