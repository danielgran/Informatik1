/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 13.2
*
* Datum:             Autor:           Grund der Aenderung:
* 30.5.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>


int main(void)
{
    int input = 0;
    bool valid = false;
    double blen, bheight;


    valid = scanf("%c", &input);

    if (!valid)
    {
        printf("Ungültige Eingabe!");
    }
    else
    {
        printf("Quadrat:  [q]\n");
        printf("Rechteck: [r]\n");
        printf("Kreis:    [k]\n");
        printf("Ellipse:  [e]\n");

        printf("Bitte waehlen:  ");
        scanf("%c", &input);

        switch (input)
        {
            case 'q':
                printf("Seitenlaenge des Quadrats: ");
                scanf("%lf", &blen);
                printf("\n..... Flaeche = %.2lf", blen * blen);
                break;
            case 'r':
                printf("Laenge der 1. Rechteckseite: ");
                scanf("%lf", &blen);
                printf("Laenge der 2. Rechteckseite: ");
                scanf("%lf", &bheight);
                printf("\n..... Flache = %.2lf", blen * bheight);
                break;
            case 'k':
                printf("Radius des Kreises: ");
                scanf("%lf", &blen);
                printf("\n..... Flaeche = %.2lf", blen * blen * 3.1415);
                break;
            case 'e':
                printf("Radius der X-Achse: ");
                scanf("%lf", &blen);
                printf("Radius der y-Achse: ");
                scanf("%lf", &bheight);
                printf("\n...... Flaeche = %.2lf", blen * bheight * 3.1415);
                break;
            default:
                printf("..... '%c' geht hier nicht", input);
                break;
        }
    }

    return 0;
}
