#include <stdio.h>

int main(void)
{
    float bottle = 0;
    float ounces = bottle + 1;
    
    while (bottle < 21) 
    {
          printf("%f  filled in the bottle.\n", ounces*bottle);
    bottle = bottle + 1;
}
   printf("The bottle is full!");
getchar();
return 0;

}
