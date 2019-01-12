#include <stdio.h>

#define NO_BLANK	0 /*No blanks encountered yet*/
#define MUL_BLANK	1 /*One or more blanks encountered*/
/*Replace each string of one or more blanks by a single blank*/

main()
{
    int  c, blank;

    blank = NO_BLANK;
    while ((c = getchar()) != EOF){
        if (c == ' '){
	    if (blank == NO_BLANK) {
	        putchar(c);
	    	blank = MUL_BLANK;
	    }
	}
	if (c != ' ') {
	    putchar(c);
	    blank = NO_BLANK;
	}

    }

}	

