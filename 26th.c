#include <stdio.h>
int main() 
{
    int n, i, j, k;
    printf("Enter order of matrix (n x n): ");
    scanf("%d", &n);
    int A[n][n], B[n][n], sum[n][n], product[n][n];
    printf("Enter elements of first matrix:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++) 
        {
            scanf("%d", &B[i][j]);
        }
    }
    for(i = 0; i < n; i++) 
    {
        for(j = 0; j < n; j++)
      {
            sum[i][j] = A[i][j] + B[i][j];
        }
    }
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            product[i][j] = 0;
            for(k = 0; k < n; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nSum of matrices:\n");
    for(i = 0; i < n; i++)
      {
        for(j = 0; j < n; j++) 
        {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("\nProduct of matrices:\n");
    for(i = 0; i < n; i++)
      {
        for(j = 0; j < n; j++)
          {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
    return 0;
}
