/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 11.1; Punkte: 0
*
* Datum:             Autor:           Grund der Aenderung:
* 5.5.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>


int main( void )
{
    int year = 0, eingabe;
    bool leap = false;

    printf("Gib ein jahr ein: ");
    eingabe = scanf("%d", &year);

    if (eingabe == 0)
    {
        printf("Ungültige Eingabe!");
        return 0;
    }


    if (year %4 == 0)
    {
        if (year%100 == 0)
        {
            if (year %400 == 0)
            {
                leap = true;
            }
        } else
        {
            leap = true;
        }
    }

    printf("---> ");
    if(!leap)
    {
        printf("kein ");
    }
    printf("Schaltjahr!");

    return 0;
}
