#include <stdio.h>

/*Replace each string of one or more blanks by a single blank*/

main()
{
    int  c, blank;

    blank = 0;
    while ((c = getchar()) != EOF){
        if (c == ' '){
	    if (blank == 0) {
	        putchar(c);
	    	blank = 1;
	    }
	}
	else if (c != ' ') {
	    putchar(c);
	    blank = 0;
	}

    }

}	

