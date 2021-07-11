/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 17.1
*
* Datum:             Autor:           Grund der Aenderung:
* 21.6.2021         Daniel Gran      Neuerstellung
* 29.6.2021         Daniel Gran     Anpassungen
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>


int main(void)
{
    int run = true;
    int eingabe, maxzahl = 0;
    int zufallszahl;

    printf("Ich denke mir eine Zahl aus [1, x] mit x aus den Natürlichen Zahlen.\n");
    printf("=============================================\n");
    printf("Druecke 'q' zum beenden.\n");

    do {

        // Eingabe 
        int inputok;
        if(maxzahl == 0)
        {
            fflush(stdin);
            printf("Wie gross soll die Zahl denn bitte maximal sein?\n");
            int inputok = scanf("%d", &maxzahl);

            if (inputok == 1 && maxzahl > 0) {
                srand(time(NULL));
                zufallszahl = (rand() % (eingabe));
                // Auskommentiert zwecks Debug
                // printf("Die Zahl ist %d", zufallszahl);
            } else
            {
                maxzahl = 0;
                continue;
            }
        }


        fflush(stdin);
        printf("\n Gib eine Zahl ein:");
        inputok = scanf("%d", &eingabe);

        // Überprüfung auf fehlerhafte Eingabe
        if (!inputok)
        {
            char quit = getchar();
            if (quit == 'q' || quit == 'Q')
            {
                run = false;
            }
            printf("Eingabe ist keine gueltige Zahl.\n");
           continue;
        }

        // Ist die Eingabe > 0 ?
        if(eingabe < 0)
        {
            printf("Die muss größer als 1 sein.\n");
            continue;
        }


        if(eingabe == zufallszahl)
        {
            printf("YAY, richtig! :-)");
            run = false;
        } else
        {
            printf("Moeoep. Nochmal.\n");
            printf("Pssst! Tipp: Die zahl ist ");
            if (eingabe < zufallszahl)
            {
                printf("groesser");
            } else
            {
                printf("kleiner");
            }
            printf(".\n");

        }
    } while(run);

    return 0;
}