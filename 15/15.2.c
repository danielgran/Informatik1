/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 15.2
*
* Datum:             Autor:           Grund der Aenderung:
* 30.5.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int input = 0, output = 0;
    bool valid = false;
    double blen, bheight;

    printf("Bis zu welcher Zahl sollen die ungeraden Zahlen aufaddiert werden?\n");
    printf("Eingabe: ");
    valid = scanf("%d", &input);

    if (!valid || input < 0)
    {
        printf("Ungültige Eingabe!");
    }
    else
    {
        for(int i = 1; i <= input; i += 2)
        {
            output += i;
        }
    }

    printf("Ergebnis: %d", output);

    return 0;
}
