#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter two numbers:\n");
    scanf("%d %d", &num1, &num2);
    if (num1 == num2) {
        printf("Both numbers are equal.");
    } else {
        printf("Numbers are not equal.");
    }
    return 0;
}
