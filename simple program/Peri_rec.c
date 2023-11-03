//  !program to find perimeter of rectangle

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter the length -> ");
    scanf("%d", &a);
    printf("Enter the breadth -> ");
    scanf("%d", &b);
    int perimeter = 2*(a+b);
    printf("the perimeter of the rectangle is %d", perimeter);
    return 0;
}
