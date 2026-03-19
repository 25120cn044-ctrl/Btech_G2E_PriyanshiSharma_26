#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() 
{
    FILE *fp;
    char word[100], str[100];
    int count = 0;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Error opening file.\n");
        exit(0);
    }
    printf("Enter the word to search: ");
    scanf("%s", word);
    while (fscanf(fp, "%s", str) != EOF)
      {
        if (strcmp(str, word) == 0) 
        {
            count++;
        }
    }
    if (count > 0)
        printf("Word found! It occurs %d times.\n", count);
    else
        printf("Word does NOT exist in the file.\n");
    fclose(fp);
    return 0;
}
