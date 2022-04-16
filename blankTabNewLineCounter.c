#include <stdio.h>

main(){
    int c, counter; // counter is the blank, tab or newline
    counter = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n' || c ==  ' ' || c == '\t')
            counter ++;
        
    }
    printf("%d\n", counter);

}