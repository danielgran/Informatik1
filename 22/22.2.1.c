

void bekommeErsteEingabe();
int getPoints();
double getDistanceBetweenTwoPoints();


int main(void)
{
    int run = true;
    int init = true;

    printf("Streckenberechnungen!\n");
    printf("=============================================\n");
    printf("Druecke 'q' zum beenden.\n");

    int a, b, i, befA, befB;
    a = 0;
    b = 0;
    befA = 0;
    befB = 0;

    double totalRange = 0, dist = 0;

    while(run)
    {
        fflush(stdin);
        printf("\n Bitte einen Punkt eingeben. (x=-1 zu, abbrechen). - FORMAT: >xx,xx<");
        befA = a;
        befB = b;
        int inputok = scanf("%d,%d", &a, &b);

 
        // Überprüfung auf fehlerhafte Eingabe
        if (inputok != 2)
        {
            char quit = getchar();
            if (quit == 'q' || quit == 'Q')
            {
                run = false;
            }
            printf("Eingabe ist nicht gültig. Bitte ans Schema halten.\n");
           continue;
        }


        if(init)
        {
            befA = a;
            befB = b;
            init = false;
        }

        printf("%d %d %d %d",a, b, befA, befB);


        dist = getDistanceBetweenTwoPoints(a,b,befA,befB);
        totalRange += dist;
        printf("Total Range now: %.2f", totalRange);

    }

    return 0;
}

double getDistanceBetweenTwoPoints(int a1, int b1, int a2, int b2)
{
    double ret;
    ret = a1+a2+b1+b2;
    return sqrt(pow(a2-a1,2) + pow(b2-b1, 2));
}
  