//Date: 28/10/2019
//Same as Ex01, but use while instead of for

#include <cstdio>

int main()
{
    int n, S;
    S = 0;
    printf("Input n = ");
    scanf("%d", &n);
    int i = 0;
    while (i <= n)
    {
        S = S + i;
        i++;
    }
    printf("S = %d\n", S);
    return 1;
}
