#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ku,uk;
    printf("son1 ni kirit\n");
    scanf("%d", &ku);
    printf("son2 ni kirit\n");
    scanf("%d", &uk);

    if (ku > uk)
    {
        printf("%d > %d", ku,uk);
    }

    else if(ku< uk)
    {
        printf("%d < %d", ku,uk);
    }
        else{
            printf("%d = %d", ku,uk);
    }
}
