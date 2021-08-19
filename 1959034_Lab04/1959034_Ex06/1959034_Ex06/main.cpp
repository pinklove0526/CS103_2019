//Date: 28/10/2019
//S4 = 1 * 2 * 3 * ... * n

#include <cstdio>

int main()
{
    int n;
    unsigned long S;
    S = 1;
    printf("Input n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        S = S * i;
    printf("S = %ld\n", S);
    return 1;
}
