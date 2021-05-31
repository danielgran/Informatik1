#include <stdio.h>

int main()
{
    int input = -1, ok;

char c = '!';



ok = scanf("%d%c", &input, &c);



printf("%d %d %c", ok, input, c); 
}