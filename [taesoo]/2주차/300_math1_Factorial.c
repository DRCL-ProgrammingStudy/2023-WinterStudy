#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    unsigned int nFac = 1;
    unsigned int i, n = 0;
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        nFac = nFac*i;
    }

    printf("%d",nFac);

    return 0;
}
