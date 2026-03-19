#include <stdio.h>
int main()
{
    int num, temp, remainder, result;
  printf("Armstrong numbers from 1 to 100 are:\n");
    for (num = 1; num <= 100; num++)
      {
        temp = num;
        result = 0;
        while (temp != 0)
          {
            remainder = temp % 10;
            result += remainder * remainder * remainder; // cube of digit
            temp = temp / 10;
        }
        if (result == num)
        {
            printf("%d ", num);
        }
    }
    return 0;
}
