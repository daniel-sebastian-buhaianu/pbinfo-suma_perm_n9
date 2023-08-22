#include <stdio.h>

int main()
{
    unsigned short nrcif = 0, sumacif = 0;
    unsigned fact = 1;
    unsigned long long S = 0, nr = 0, n;
    
    scanf("%llu", &n);
    
    if (n == 0) nrcif = 1;

    while (n > 0) {
        nr = nr * 10 + 1;
        
        nrcif++;

        fact *= nrcif;

        sumacif += n % 10;

        n /= 10;
    }
    
    fact /= nrcif;
    
    S = nr * fact * sumacif;

    printf("%llu", S);

    return 0;
}
// scor: 100/100
