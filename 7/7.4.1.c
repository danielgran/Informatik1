/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 7.4.1; Punkte: 0
*
* Datum:             Autor:           Grund der Aenderung:
* 18.04.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>


int main( void )
{
    int oktaleingabe = 0, erfolgreicheeingabe = 0;

    printf("Geben Sie eine Oktalzahl ein: ");
    erfolgreicheeingabe = scanf("%o", &oktaleingabe);

    printf("Hier steht eine 1, wenn Ihre Eingabe erfolgreich war: %d\n\n", erfolgreicheeingabe);
    printf("---------------> %o(8) - %d - %x(16)\n", oktaleingabe, oktaleingabe, oktaleingabe);
}
