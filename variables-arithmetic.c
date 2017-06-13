#include <stdio.h>

/* print Fahrenheit - Celcius table
    for fahr = 0, 20, ..., 300 */

main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* lower limt of temp */
    upper = 300; /* upper limit */
    step = 20; /* what we're stepping by */
    
    fahr = lower;
    printf("F\t C\n");
    while (fahr <= upper ) {
        celsius = (5.0/9.0) * (fahr-32.0); 
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }

}
