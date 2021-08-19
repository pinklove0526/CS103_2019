//Date: 28/10/2019
//S2 = 1^2 + 2^2 + ... + n^2

#include <cstdio>

int main()
{
    int n, S;
    S = 0;
    printf("Input n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        S = S + (i * i);
    printf("S = %d\n", S);
    return 1;
}
