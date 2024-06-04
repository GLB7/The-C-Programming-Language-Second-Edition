#include <stdio.h>

/* copy input to output; 2nd version */
main(){
    int c;

    // Exercise 1-6
    printf("Enter any non EOF value: \n");
    c = getchar() != EOF;
    printf("\"getchar() != EOF\" is %d\n", c);

    // Exercise 1-7
    printf("The value of EOF is %d\n", EOF);

    while((c = getchar()) != EOF)
        putchar(c);
}