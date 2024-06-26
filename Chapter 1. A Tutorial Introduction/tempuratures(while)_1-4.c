#include <stdio.h>

/* print Celsius-Fahrenheit table*/

main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("Celsius-Fahrenheit Table\n"); // Exrecise 1-3
    celsius = lower;
    while(celsius <= upper){
        fahr = (celsius * 9.0/5.0) + 32.0;
        printf("%3.0f\t%6.0f\n", celsius, fahr);
        celsius += step;
    }
}