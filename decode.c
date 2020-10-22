
#include <stdio.h>
#include <math.h>
#include <string.h>
//#include<conio.h>

void decode(void)
{
    ///the secret code is 8
    char original_message[100] = "ITRYUPWANIASRRIN MTTSOTGREIEEGHUE NM R AAOG WACGLP CEM E-ESO  L!";
    char Trans[8][8];
    int i, j,count=0;

    //put into 2 dimension array
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            Trans[i][j] = original_message[count];
            count++;
        }
    }

    //print the crypt
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf(" %c ", Trans[i][j]);
        }
        printf("\n");
    }

    //print the decode
    printf("\n");
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("%c", Trans[j][i]);
        }
    }
    printf("\n");
}


