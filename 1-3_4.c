#include <stdio.h>

/*print celsius-fahrenheit table
 for cel = 0, 10, ..., 150 */
main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;	/*lower limit of temperature scale*/
    upper = 150;	/*upper limit*/
    step = 10;	/*step size*/

    celsius = lower;
    printf("The conversion from Celsius to Fahrenheit:\n\n");
    printf("Celsius\tFahrenheit\n");
    while (celsius <= upper) {
        fahr = (9.0/5.0) * (celsius) + 32;
	printf("%7.0f\t%10.0f\n", celsius, fahr);
	celsius = celsius + step;
    }

}
