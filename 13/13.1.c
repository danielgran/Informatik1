/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 13.1
*
* Datum:             Autor:           Grund der Aenderung:
* 5.5.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int input = 0;
    bool valid = false;

    printf("Hauptmenü\n");
    printf("=========\n");
    printf("(A) endern\n");
    printf("(B) eenden\n");
    printf("(D) rucken\n");
    printf("(E) ingeben\n");
    printf("(L) oeschen\n");
    printf("Was wünschen Sie zu tun? ");
    valid = scanf("%c", &input);

    if (!valid)
    {
        printf("Ungültige Eingabe!");
    }
    else
    {

        switch (input)
        {
        case 'A':
            printf("Sie haben (A) gewaehlt.");
            break;
        case 'B':
            printf("Sie haben (B) gewaehlt.");
            break;
        case 'D':
            printf("Sie haben (D) gewahlt.");
            break;
        case 'E':
            printf("Sie haben (E)n gewaehl.");
            break;
        case 'L':
            printf("Sie haben (L)n gewahlt");
            break;
        default:
            printf("Ihre Wahl '%c' ist unerlaubt!", input);
            break;
        }
    }

    return 0;
}
