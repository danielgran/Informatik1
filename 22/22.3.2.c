/**********************************************************************\
* Kurzbeschreibung: Augabe: 22.3.2
*
* Datum:             Autor:           Grund der Aenderung:
* 21.6.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>



void swapNumbers();
int main(void)
{
    int input1_ok, input2_ok, input3_ok, input4_ok, input1, input2, input3, input4;
    printf("Dieses Programm gibt Ihnen 4 Zahlen in richtiger Reihenfolge wieder zurück.\n");

    do
    {
        printf("Erste  Zahl bitte:\n");
        input1_ok = scanf("%d", &input1);
        printf("Zweite Zahl bitte:\n");
        input2_ok = scanf("%d", &input2);
        printf("Dritte Zahl bitte:\n");
        input3_ok = scanf("%d", &input3);
        printf("Vierte Zahl bitte:\n");
        input4_ok = scanf("%d", &input4);
    } while (!(input1_ok && input2_ok && input3_ok && input4_ok)); // works here, scanf rewrites only 1 var each so its a "bool" :-)



    int ordered = 0, i = 0;
    while(!ordered)
    {

        // unnecessary if block, was in excercise
        if(input1 <= input2 && input2 <= input3 && input3 <= input4)
        {
            printf("Zahlen waren schon sortiert. Das unterfordert mich!\n");
            break;
        }

        if (input1 > input2)
            swapNumbers(&input1, &input2);
        if (input2 > input3)
            swapNumbers(&input2, &input3);
        if (input3 > input4)
            swapNumbers(&input3, &input4);
        if (input1 > input4)
            swapNumbers(&input1, &input4);

        // Now print progress
        printf("%d\n%d\n%d\n%d\n", input1, input2, input3, input4);
        printf("==============\n");

        // Check if done
        if(input1 <= input2 && input2 <= input3 && input3 <= input4)
        {
            ordered = 1;
        }

        // Upcount Iterator
        i++;
    }
    printf("\Fertig nach %d Iterationen.", i);




}

// Some Pointerswapping
void swapNumbers(int* z1, int* z2)
{
    int temp = *z1;
    *z1 = *z2;
    *z2 = temp;
}