/*lists 1-10 and whether it is even or odd*/
#include <stdio.h>
int main(void)
{
    int count, number; /*creates integers count and number*/
    count = 0; /*sets count to 0*/
   
    while(count<11)/*sets condition for count*/
    {
number = count;
                     count = count+1; /*action on count*/                   
                     

    

    if(number%2 > 0) /*if the remainder of the number from being divided by 2 is greater than 0*/

               printf("%d is odd\n",number); /*labels the number as odd*/


else

               printf("%d is even\n", number); /*labels the number as even*/

}
    
    getchar(); /*ends program*/
    return 0; /*returns 0*/

}






