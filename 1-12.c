#include <stdio.h>

#define IN	1 /*inside the word*/
#define OUT	0 /*outside the word*/

/*Print input one word per line*/

main()
{
    int c, nw, state;
    state = OUT;

    while ((c =  getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
	    state = OUT;
	    printf ("\n");
	}    
	else if (state == OUT) {
	    state = IN;
	    putchar(c);
	}
        else if (state == IN) {
	    putchar(c);
	}
    }

}
