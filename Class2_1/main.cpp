#include <stdio.h>
#include <math.h>

int main()
{
    double a;
    printf("Please enter a: ");
    scanf("%lf", &a);
    printf("cos( a ) is:\t%f\n", cos( a ));

    printf("PI is:\t%f\n", M_PI);

    printf("log( a ) is:\t%f\n", log( a ));
    return 0;
}
