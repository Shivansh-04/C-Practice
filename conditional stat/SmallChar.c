/**
 * This C program checks if a given character is a lowercase letter.
 *
 * @return The main function is returning an integer value of 0.
 */
#include <stdio.h>

int main()
{
    char cha;
    scanf("%c", &cha);

    if (cha >= 'a' && cha <='z'){
        printf("Yes");
    }
    else {
        printf("No");
    }
    return 0;
}
