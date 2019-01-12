#include <stdio.h>

#define LOWER   0	/*lower limit*/
#define UPPER   300	/*upper limit*/
#define STEP    20	/*step size*/

/*print Fahrenheit-celsius table
 for fahr = 0, 20, ..., 300 */
main()
{
    int fahr;
   
    printf("The conversion from Fahrenheit to Celsius:\n\n");
    printf("Fahrenheit\tCelsius\n");
    
    for (fahr = UPPER; fahr >= LOWER; fahr = fahr - STEP)
        printf("%10d\t%7.2f\n", fahr, (5.0/9.0)*(fahr-32));


}
