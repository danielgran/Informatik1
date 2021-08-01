/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 5.2.2; Punkte: 0
*
* Datum:             Autor:           Grund der Aenderung:
* 30.03.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>


/*--- Funktionsdefinitionen ------------------------------------------*/
int main( void )
{
    float pi;

    pi = 3 + (1 / (7 + (1 / (15 + (1 / (1 + (1 / (299 + (1.0 / 2.0))))))))); // Berechnung von pi durch die Formel

    printf("pi = %f", pi);
    return 0;
}
