/**********************************************************************\
* Kurzbeschreibung: Augabe: 22.3.2
*
* Datum:             Autor:           Grund der Aenderung:
* 21.6.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define MAXNUM 100

bool valueinarray();
int main(void)
{
    printf("Lottozahlen Simulation\n");
    printf("========================\n\n\n");


    int input1, input1_ok, input2, input2_ok, run = 1;
    
    int balls[MAXNUM];
    int pick[MAXNUM];

    srand(time(NULL));
    
    while (run)
    {

        printf("Wie viele Kuglen k sollen zur verfügung stehen? (1 <= k <= %s)\n", MAXNUM);
        fflush(stdin);
        input1_ok = scanf("%d", &input1);
        printf("Wie viele Kugeln werden davon gezogen? (1 <= n <= %d)\n", input1);
        fflush(stdin);
        input2_ok = scanf("%d", &input2);

        if (!(input2_ok == 1 && input2_ok == 1))
        {
            printf("Und nochmal, da hat die Eingabe wohl nicht hin gehauen.\n");
            continue;
        }

        
        // Generate Balls
        for (int i = 0; i < MAXNUM; i++)
        {
            balls[i] = (i + 1);
            if (i >= input1)
            {
                balls[i] = 0;
            }
        }

        // Now pick input2 numbers
        for (int i = 0; i < MAXNUM ; i++)
        {
            int ran;
            {
                ran = (rand() % (MAXNUM + 1));
            } while (pick[ran] != 0);
            pick[ran] = ran;
        }
        

        // Print
        for (int i = 0; i <= MAXNUM; i++)
        {
            if(pick[i] != 0)
                printf("%d", pick[i]);
        }

    }


}

bool valueinarray(int val, int arr[])
{
    int i;
    int found = 0;
    for(i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if(arr[i] == val)
            found = 1;
            break;
    }
    return found;
}