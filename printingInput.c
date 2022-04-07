#include <stdio.h>

/* copy input to output; */

main (){
    int c; // EOF is an int so to do comparison, c has to be big enough too so it is an int too.
    while ((c = getchar()) != EOF) {
        putchar(c);
    }
}