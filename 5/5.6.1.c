/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 5.6.1; Punkte: 0
*
* Datum:             Autor:           Grund der Aenderung:
* 10.04.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>


int main( void )
{
    unsigned short x = 0x12ab;

    // "linker" und "rechter" teil von short vertauschen
    x = (0x12ab <<8) + (x >> 8);

    // ... und fertig :-)
    printf("%X", x);
}
