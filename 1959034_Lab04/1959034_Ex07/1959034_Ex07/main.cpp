//Date: 28/10/2019
//S5 = 1! + 2! + ... + n!

#include <cstdio>

int main()
{
    int n;
    unsigned long S;
    S = 0;
    printf("Input n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        unsigned long gt = i;
        for (int j = 1; j <= i; j++)
            gt = gt * j;
        S = S + gt;
    }
    printf("S = %ld\n", S);
    return 1;
}
