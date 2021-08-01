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
    int eingabe, quersumme = 0;

    printf("Dieses Programm berechnet die Quersumme einer eingegebenen positiven Zahl!\n");
    printf("Drücken sie q oder Q zum verlassen des Programms!\n");

    while (run)
    {
        fflush(stdin);
        printf("Zahl bitte: ");
        int inputok = scanf("%d", &eingabe);

        if (!inputok || eingabe < 0)
        {
            char quit = getchar();
            if (quit == 'q' || quit == 'Q')
            {
                run = false;
            }
            printf("Eingabe muss Positiv und valide sein!\n");
            continue;
        }
        int hilf = eingabe;
        while(hilf > 0)
        {
            quersumme += hilf%10;
            hilf /= 10;
        }
        
        
        printf("Quersumme zu %d ist: %d\n\n", eingabe, quersumme);
    }

    return 0;
}
