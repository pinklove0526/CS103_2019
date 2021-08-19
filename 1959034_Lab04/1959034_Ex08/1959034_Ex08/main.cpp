//Date: 28/10/2019
//Same as Ex07, but in an alternative way

#include <cstdio>

int main()
{
    int n;
    unsigned long S;
    S = 0;
    printf("Input n = ");
    scanf("%d", &n);
    unsigned long gt = 1;
    for (int i = 1; i <= n; i++)
    {
        gt = gt * i;
        S = S + gt;
    }
    printf("S = %ld\n", S);
    return 1;
}
