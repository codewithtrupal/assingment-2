#include <stdio.h>

int main()
{
    int num;

    printf("Enter the number : ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for (int j = i-1; j >= 1; j--)
        {
            printf("%d", j);
        }
       printf("\n");
    }
}