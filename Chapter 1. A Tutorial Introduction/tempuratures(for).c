#include <stdio.h>

/* print Fahrenheit-Celsius table (using a for loop instead)*/

main(){
    int fahr;

    for(fahr = 0; fahr <= 300; fahr = fahr + 20){ // consist of 3 parts initalization, condition, increment
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
    }
}