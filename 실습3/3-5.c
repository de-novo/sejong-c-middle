#include <stdio.h>
#include <math.h>

int three5(){

    double a;

    scanf("%lf",&a);
    double  result =  floor(a+0.5);
    printf("rounded up to %1.0lf", result);

    return 0;

}