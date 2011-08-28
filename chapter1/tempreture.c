#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  10

float fahr2celsius(float fahr);

main()
{
    float fahr;
    float celcius;

    for ( fahr=LOWER; fahr <= UPPER; fahr+=20 ) {
        printf("%.1f\n", fahr2celsius(fahr));
    }

    return 0;
}

float fahr2celsius (float fahr)
{
   return (5.0/9.0) * (fahr - 32.0); 
}
