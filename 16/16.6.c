/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 16.6
*
* Datum:             Autor:           Grund der Aenderung:
* 30.5.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int run = true;
    unsigned int zahl, outzahl, quersumme = 0;

    printf("Dieses Programm berechnet die Quersumme einer eingegebenen positiven Zahl!\n");
    printf("Zahl bitte (positiv): \n");

    while (run)
    {
        int inputok = scanf("%d", &zahl);

        if (!inputok && zahl > 0)
        {
            char quit = getchar();
            if (quit == 'q' || quit == 'Q')
            {
                run = false;
            }
            printf("Eingabe muss Positiv und valide sein!\n");
            printf("Zahl bitte: ");
            continue;
        }

    outzahl = zahl;
    quersumme += zahl % 10;

    while(zahl = zahl/10)
        quersumme += zahl % 10;
        
        printf("Quersumme zu %d ist: %u", outzahl, quersumme);

        run = false;
        
    }

    return 0;
}
