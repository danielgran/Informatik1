/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 16.3
*
* Datum:             Autor:           Grund der Aenderung:
* 30.5.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int run = true;
    unsigned int zahl;

    printf("Eingabe einer geraden Zahl zwischen 1 und 100\n");
    printf("=============================================\n");
    printf("Druecke 'q' zum beenden.\n");

    while (run)
    {
        printf("\n   Gib eine gerade Zahl zwischen 1 und 100 ein: ");
        int inputok = scanf("%u", &zahl);

        if (!inputok)
        {
            char quit = getchar();
            if (quit == 'q' || quit == 'Q')
            {
                run = false;
            }
            printf("Eingabe ist keine gueltige positive Ganzzahl zwischen 1 und 100!\n");
            continue;
        }

        if(zahl > 100)
        {
            printf("Die Zahl muss kleiner 100 sein.\n");
        }

        if(zahl % 2 == 0)
        {
            printf("Die Zahl ist nicht gerade.\n");
            continue;
        } else
        {
            printf("Die Zahl %u ist eine gerade Zahl zwischen 1 und 100.\n", zahl);
        }
    }

    return 0;
}
