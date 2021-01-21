#include <stdio.h>

int main(void)
{
    float celsius;
    float fahrenheit = 0;
    printf("-------------------------------");
    printf("\n   Celsius          Fahrenheit\n");
    for (celsius = -50; celsius <= 150; celsius += 5)
    {
        printf("-------------------------------");
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("\n | %6.2f\t|\t%6.2f |\n", celsius, fahrenheit);
    }
    return 0;
}