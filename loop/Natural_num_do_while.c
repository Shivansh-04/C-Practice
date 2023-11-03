// !write a program to print n natural number using if else loop

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int n ;
    int i =1;
    printf("Enter the number :- ");
    scanf("%d", &n);

    if(n <= 0){
        printf("Please enter a positive number \n");
        return 1;
    }
    do
    {
        printf("%d\n", i);
        i++;
    } while (i<=n);
     
    return 0;
}
