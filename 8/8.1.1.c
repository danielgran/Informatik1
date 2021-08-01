/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 8.1.1
*
* Datum:             Autor:           Grund der Aenderung:
* 21.6.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main(void)
{
    const double g = 9.80655;
    int h;

    printf("In welcher Hoehe verlaesst der Fallschirmspringer den Flieger (in Meter): ");
    fflush(stdin);
    scanf("%d", &h);

    // Vorasugesetzt natürlich der User macht eine richtige Eingabe.
    int t = sqrt(2 * (h - 650) / g);

    printf("---> Der Springer muss nach %d Sekunden die Reissleine ziehen", t);
    getchar();
    return 0;
}
  