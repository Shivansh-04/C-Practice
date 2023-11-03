//!  WAP to print largest of 4

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int max = a;

    if (b > max){
        max = b;
    }

    if (c > max){
        max = c;
    }

    if (d > max){
        max = d;
    }

    printf("The largest number is :- %d", max);
    // if(a<b )

    return 0;
}
