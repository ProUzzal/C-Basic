#include <stdio.h>
int main()
{

    /*There are three types of conditional statements, 
1. if, else and else if.
2. switch statements
3. Conditional (Ternary Operators): (condition)? (true) : false;
*/

    //Find max number among three;
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is Max Number\n", a);
        }
        else
        {
            printf("%d is Max Number\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is Max Number\n", b);
        }
        else
        {

            printf("%d is Max Number\n", c);
        }
    }
    return 0;
}