#include <stdio.h>

/*
"print Fahrenheight-Ceisius table for fahr = 0, 20, ..., 300 " */

#define LOWER 0
#define UPPER 300
#define STEP 20

main ()
{
    float fahr, celsius;
    float lower, upper, step;

    fahr = LOWER;
    while (fahr < UPPER) {
        celsius = 5.0 / 9.0 * (fahr-32);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + STEP;
    }
}