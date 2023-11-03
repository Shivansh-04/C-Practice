// ! program to identify passing marks 

#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int a, b, c;
    printf("Enter marks if student first:- ");
    scanf("%d", &a);

    printf("Enter marks if student first:- ");
    scanf("%d", &b);
    
    printf("Enter marks if student first:- ");
    scanf("%d", &c);

    if(a>33 && b>33 && c>33){
        if(((a+b+c)/3>40)){
            printf("Total marks are :- %d\n", a+b+c);
            printf("Yes the student is pass in exam");
        }
    } else{
            printf("Total marks are :- %d\n", a+b+c);
            printf("No the sudent is not passed in exam");
    }
    return 0;
}
