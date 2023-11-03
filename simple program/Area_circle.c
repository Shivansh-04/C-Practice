//!  WAP to print area of circle

# include <stdio.h>

int main(int argc, char const *argv[])
{
    int radii;
    printf("Enter the radii of circle -> ");
    scanf("%d",&radii);
    float area = 3.14*radii*radii;
    printf("Area of circle is %f", area);
    return 0;
}
