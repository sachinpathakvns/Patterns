#include <stdio.h>
int main()
{
    int n = 5, i, k, j, choice;
    while (1)
    {
        printf("\n0-Exit\n1-Half left pyramid\n2-Half right pyramid\n3-Full pyramid\n4-Inverted pyramid\n5-Empty rectangle\n6-Empty triangle\n7-Number triangle\n8-Character triangle");
        printf("\nEnter choice :");
        scanf("%d", &choice);
        switch (choice)
        {
        case 0:
            return 0;
        case 1:
            for (i = 1; i <= n; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 2:
            printf("\n");
            for (i = 1; i <= n; i++)
            {
                for (j = n; j >= i; j--)

                    printf(" ");

                for (k = 1; k <= i; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 3:
            printf("\n");
            for (i = 1; i <= n; i++)
            {
                for (j = n; j >= i; j--)

                    printf(" ");

                for (k = 1; k <= 2 * i - 1; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 4:
            printf("\n");
            for (i = n; i >= 1; i--)
            {
                for (j = n; j >= i; j--)

                    printf(" ");

                for (k = 1; k <= 2 * i - 1; k++)
                {
                    printf("*");
                }
                printf("\n");
            }
            break;
        case 5:
            for (i = 1; i <= 5; i++)
            {
                for (k = 1; k <= 5; k++)
                {
                    if (i == 1 || i == 5 || k == 1 || k == 5)

                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 6:
            for (i = 1; i <= 5; i++)
            {
                for (k = 1; k <= 5; k++)
                {
                    if (i == 5 || k == 1 || k == i)

                        printf("*");
                    else
                        printf(" ");
                }
                printf("\n");
            }
            break;
        case 7:
            printf("\n");
            int k = 1;
            for (i = 1; i <= 5; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("%d ", k++);
                }
                printf("\n");
            }
            break;
        case 8:
            for (i = 1; i <= 5; i++)
            {
                for (j = 1; j <= i; j++)
                {
                    printf("%c ", i + 64);
                }
                printf("\n");
            }
        }
    }
}