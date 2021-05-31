/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 15.3 - Leibnizreihe
*
* Datum:             Autor:           Grund der Aenderung:
* 30.5.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int input = 0;
    bool valid = false;
    double output = 0;

    printf("Bis zu welchem Glied n soll die Leibnizreihe evaluiert werden?\n");
    printf("Eingabe: ");
    valid = scanf("%d", &input);

    if (!valid || input < 0)
    {
        printf("Ungültige Eingabe!");
    }
    else
    {
        int counter = 1;
        double rz = 1;
        for (int i = 0; i < input; i += 1)
        {
            if(i % 2 == 0)
            {
                rz = 1;
            } else
            {
                rz = -1;
            }
            output += (1.0/(double)counter * rz);
            counter += 2;
        }
        printf("Ergebnis: %f", output);
    }
    return 0;
}
