/**********************************************************************\
* Kurzbeschreibung: Aufgabe: 5.6.1; Punkte: 0
*
* Datum:             Autor:           Grund der Aenderung:
* 10.04.2021         Daniel Gran      Neuerstellung
\**********************************************************************/
#include <stdio.h>

#define PI 3.1415
#define FOURPI (4 * PI)

int main( void )
{
    double eingabe = 0;
    printf("Bitte beliebigen Kugelradius (Gleitkomma mit Punkt getrennt, z.B. 409.5) eingeben:");
    scanf("%lf", &eingabe);

    printf("Der Umfang der Kugel: %f\n", ((2*PI*eingabe)));
    printf("Das Volumen der Kugel: %f\n", ((4.0/3)*(eingabe*eingabe*eingabe)*PI));
    printf("Die Oberflaeche der Kugel: %f\n", ((eingabe*eingabe)*FOURPI));



}
