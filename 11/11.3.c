/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 11.3
*
* Datum:             Autor:           Grund der Aenderung:
* 5.5.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>


int main( void )
{
    int input1 = 0, input2 = 0;
    bool valid1= false, valid2 = false, dividable = false;


    printf("Zahl x durch y teilbar?\n");
    printf("=======================\n");
    printf("Dieses Programm sagt Ihnen, ob eine Eingabe x durch y teilbar ist.\n");
    printf("x? ");
    valid1 = scanf("%d", &input1);
    printf("\ny? ");
    valid2 = scanf("%d", &input2);


    if (!(valid1 && valid2))
    {
        printf("Ungültige Eingabe!");
        return 0;
    } else 
    {
        if ((input1 % input2) == 0)
        {
            dividable = true;
        }

        printf("---> %d ist durch %d ", input1, input2);
        if(!dividable)
        {
            printf("nicht ");
        }
        printf("teilbar!");
    }
    return 0;
}
