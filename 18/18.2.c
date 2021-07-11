/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 18.2
*
* Datum:             Autor:           Grund der Aenderung:
* 21.6.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int run = true;

    printf("Ich zeig dir hier die Primzahlen bis zu deiner Eingabe!\n");
    printf("=============================================\n");
    printf("Druecke 'q' zum beenden.\n");

    int m, n, i, einhalbm;


    do {
        fflush(stdin);
        printf("\n Geben Sie den Bereich (m,n ; m <= n > 0) ein fuer den die Primzahlen ausgegeben werden sollen");
        int inputok = scanf("%d,%d", &m, &n);

        // Überprüfung auf fehlerhafte Eingabe
        if (inputok == 2 && m >= n && n < 2 && m < 1)
        {
            char quit = getchar();
            if (quit == 'q' || quit == 'Q')
            {
                run = false;
            }
            printf("Eingabe ist nicht gültig. Bitte ans schema halten.\n");
           continue;
        }



        while (m <= n)
        {
            einhalbm = m / 2;
            int prime = true;
            for (i = 2; i <= einhalbm; i++)
                if (!(m % i))
                {
                    prime = false;
                    break;
                }
                if (prime)
                    printf("%8d,", m);
                m++;
        }
        


    } while(run);

    return 0;
}