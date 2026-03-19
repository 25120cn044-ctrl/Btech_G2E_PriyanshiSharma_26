#include <stdio.h>
int main() 
{
    int m, n, i, j, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];
    printf("Enter elements of the matrix:\n");
    for(i = 0; i < m; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &arr[i][j]);
        }
    }
    if(m == n) 
    {
        for(i = 0; i < m; i++) {
            sum += arr[i][i];
        }
        printf("Sum of diagonal elements = %d\n", sum);
    }
    else
    {
        printf("Diagonal elements exist only for square matrices.\n");
    }
    return 0;
}
