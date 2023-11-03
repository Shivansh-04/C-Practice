//! WAP to find leap year

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int year ;
    printf("Enter year: ");
    scanf("%d", &year);

    if (year % 4 == 0){
        printf("Yes it is an leap year.\n");
    }
    else{
        printf("No it is not an leap year.\n");
    }
    return 0;
}
