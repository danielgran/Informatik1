#include <stdio.h>
#include <math.h>

int main()
{
    int eingabe = 0;
    fflush(stdin);

    eingabe = 100;

    printf("Oktal: %o\n", eingabe);
    printf("Hexa: %x\n", eingabe);
    printf("Dual: ");

    for (int i = 4*8-1; i >= 0; i--)
    {
        printf("%d", ((int)pow((double)2, (double)i)) && (eingabe & (int)pow((double)2,(double)i)));
    }




    return 0;
}
