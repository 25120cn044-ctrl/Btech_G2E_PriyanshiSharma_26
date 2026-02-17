#include <stdio.h>
void main()
{
    int m, day;
    printf("Enter ther number");
    scanf("%d", &m);
    switch (m)
        ;
    {
    case1:
    case3:
    case5:
    case7:
    case8:
    case10:
    case12:
        day = 31;
    // break;
    case4:
    case6:
    case11:
        day = 30;
    // break;
    case2:
        day = 28;
        // break;
        // default:
        printf("invalid month");
    }
    printf("\m number of days on %d month=%d", &m, &day);
}