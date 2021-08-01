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

int getNumbers();
int getDraws(int max);
void printDrawnNumbers(int count, int all);
void bubblesort(int *array, int length);

int main(void)
{
    srand(time(NULL));
    int arrlength = MAXNUM;
    int numbersToDraw = getDraws(arrlength);
    printDrawnNumbers(numbersToDraw, arrlength);

    fflush(stdin);
    return 0;
}

int getNumbers() {
    int inputInvalid, numbers;
    char c;
    do {
        printf("Wieviele Kugeln sollen zur Verfuegung stehen (mind. 1 und max %d): ", MAXNUM);
        inputInvalid = scanf("%d%c", &numbers, &c) != 2 || c != '\n';
        inputInvalid |= numbers < 1 || numbers > MAXNUM;
        if(inputInvalid)
            printf("Eingabe ungueltig!\n");
    } while(inputInvalid);
    return numbers;
}

int getDraws(int max) {
    int inputInvalid, numbers;
    char c;
    do {
        printf("Wieviele werden davon gezogen (mind. 1 und max. %d): ", max);
        fflush(stdin);
        inputInvalid = scanf("%d%c", &numbers, &c) != 2 || c != '\n';
        inputInvalid |= numbers < 1 || numbers > max;
        if(inputInvalid)
            printf("Eingabe ungueltig!\n");
    } while(inputInvalid);
    return numbers;
}

void printDrawnNumbers(int count, int all) {
    int aAll[MAXNUM], picks[MAXNUM], i, rest = all;

    for(i = 0; i < all; i++)
        aAll[i] = i + 1;

    for(i = 0; i < count; i++) {
        // Pick random index
        int iPick = rand() % rest--;
        // Set pick on output array
        picks[i] = aAll[iPick];
        // copy last entry to picked number to cross it out
        aAll[iPick] = aAll[rest];
    }

    bubblesort(picks, count);

    printf("===== %d aus %d =====\n", count, all);
    for(i = 0; i<count; i++)
        printf("%5d", picks[i]);
}

void bubblesort(int *array, int length)
 {
     int i, j;
     for (i = 0; i < length - 1; ++i)
     {

        for (j = 0; j < length - i - 1; ++j)
        {
            if (array[j] > array[j + 1])
            {
                int tmp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = tmp;
            }
        }
     }
 }
