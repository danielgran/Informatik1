/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 7.3.1; Punkte: 0
*
* Datum:             Autor:           Grund der Aenderung:
* 18.04.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>


int main( void )
{
    int rahmenbreite = 0;

    printf("Wie breit soll der Rahmen werden?");
    scanf("%d", &rahmenbreite);

    printf("+%.*s+\n", rahmenbreite, "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");
    printf("|%*s|\n", rahmenbreite, "");
    printf("|%*s|\n", rahmenbreite, "");
    printf("|%*s|\n", rahmenbreite, "");
    printf("+%.*s+\n", rahmenbreite, "-----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------");


}