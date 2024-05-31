#include <stdio.h>
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 (This is an example of a multiple line comment)*/
main(){
    float fahr, celsius; // Variables must always be declared before being used. Declaration assigns properties to the variables like the type and name. 
    int lower, upper, step;

    // Variables are being assigned values below, if this is not done, unpredictable behavior may occur.
    lower = 0; /* lower limit of tempurature table */ 
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    printf("Fahrenheit-Celsius Table\n");
    while(fahr <= upper){
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}