/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 16.3
*
* Datum:             Autor:           Grund der Aenderung:
* 30.5.2021         Daniel Gran      Neuerstellung
* 03.6.2021         Daniel Gran      Verbesserung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>

#define VALMAX 100

int main(void)
{
    int run = true;
    int eingabe;

    printf("Eingabe einer geraden Zahl zwischen 1 und %d\n", VALMAX);
    printf("=============================================\n");
    printf("Druecke 'q' zum beenden.\n");

    while (run)
    {
        fflush(stdin);
        printf("\n   Gib eine gerade Zahl zwischen 1 und %d ein: ", VALMAX);
        int inputok = scanf("%u", &eingabe);

        // Überprüfung auf fehlerhafte Eingabe
        if (!inputok)
        {
            char quit = getchar();
            if (quit == 'q' || quit == 'Q')
            {
                run = false;
            }
            printf("Eingabe ist keine gueltige positive Ganzzahl zwischen 1 und %d!\n", VALMAX);
           continue;
        }

        // Ist die Eingabe auch im Interval 0<=eingabe<=100 ?
        if(eingabe > 100)
        {
            printf("Die Zahl muss kleiner %d sein.\n", VALMAX);
            continue;
        }
        if(eingabe < 0)
        {
            printf("Die muss größer als %d sein.\n", VALMAX);
            continue;
        }


        if(eingabe % 2 == 0)
        {
            printf("Die Zahl %d ist eine gerade Zahl zwischen 1 und %d.\n", eingabe, VALMAX);
        } else
        {
            printf("Die Zahl ist nicht gerade.\n");
        }
    }

    return 0;
}