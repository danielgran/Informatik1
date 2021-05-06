/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 5.5.1; Punkte: 0
*
* Datum:             Autor:           Grund der Aenderung:
* 10.04.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>


int main( void )
{
    int wert;
    unsigned short u;
    short x;

    // 1 - ist x ungerade?
    x = -7;
    wert = x&0x1;
    printf("n.Wert: %d\n", wert);

    // 2 - ist u größer als 255?
    u = 256;
    wert = (u & 0x100)&&256;
    printf("n.Wert: %d\n", wert);

    // 3 - ist die zahl letztlich größer als 512
    u = 521;
    wert = (u & 0x200)&&512;
    printf("n.Wert: %d\n", wert);

    // 4 - ist x e [0,127]
    x = 120;
    wert = !(x & 0xFF80);
    printf("n.Wert: %d\n", wert);

    // 5 - ist u % 4 = 0
    u = 36;
    wert = (u&0x04)&&4;
    printf("n.Wert: %d\n", wert);

}
