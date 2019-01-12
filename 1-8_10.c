#include <stdio.h>

/*count blanks, tabs and newlines*/

main()
{
    int c, bl, ta, nl;
    bl = ta = nl = 0;

    while((c = getchar()) != EOF) {
        if (c == '\b')
	    printf("\\b");
        if (c == '\t')
	    printf("\\t");
	else if (c == '\\')
	    printf("\\\\");
	putchar(c);	
    }
   /*printf ("count of blanks: %d\n", bl);
    printf ("count of tabs: %d\n", ta);
    printf ("count of newlines: %d\n", nl);*/

}
