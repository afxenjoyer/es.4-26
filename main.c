#include <stdio.h>

int main(void)
{
    int barraIniziale;
    int barraOrizzontale;
    int barraVerticale;

    for (barraIniziale = 1; barraIniziale <= 18; barraIniziale++)
    {
        printf("____");
    }
    printf("\n");

    printf("|");

    for (barraOrizzontale = 1; barraOrizzontale <= 12; barraOrizzontale++)
    {
        printf("%5d|", barraOrizzontale);
    }
    printf("\n");

    // printf("    -");
    printf("|");
    for (barraOrizzontale = 1; barraOrizzontale <= 12; barraOrizzontale++)
    {
        printf("------");
    }
    printf("\n");

    for (barraOrizzontale = 1; barraOrizzontale <= 12; barraOrizzontale++)
    {
        printf(" ");
        for (barraVerticale = 1; barraVerticale <= 12; barraVerticale++)
        {
            printf("%5d", barraOrizzontale * barraVerticale);
            if (barraVerticale < 12)
                printf("|");
            else if (barraVerticale == 12)
                printf("|");
        }
        printf("\n");

        // printf("    -");
        printf("|");
        for (barraVerticale = 1; barraVerticale <= 12; barraVerticale++)
        {
            printf("------");
        }
        printf("\n");
    }

    return 0;
}
