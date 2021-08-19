//Date: 28/10/2019
//S(n) = 1 + 2 + 3 + 4 + ... + n

#include <cstdio>

int main()
{
    int n, S;
    S = 0;
    printf("Input n = ");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
        S = S + i;
    printf("S = %d\n", S);
    return 1;
}
