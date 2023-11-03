// ! program to find tax to be paid 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Enter money in lakhs using float values like 2.5L\n");
    float f;
    scanf("%f", &f);

    if(f>2.5 && f<=5.0){
        printf("you have to pay 5%% of total money");
        float marks_amount = (f*5)/100;
        printf("Tax to be paid is :- %f", marks_amount);
    }
    else if(f < 2.5){
        printf("You dont have to pay any amount");
    }
    else if(f>5.0 && f<=10.0){
        printf("you have to pay 20%% of total money");
        float marks_amount = (f*20)/100;
        printf("Tax to be paid is :- %f", marks_amount);
    }
    else{
        printf("you have to pay 30%% of total money");
        float marks_amount = (f*30)/100;
        printf("Tax to be paid is :- %f", marks_amount);
    }
    return 0;
}
