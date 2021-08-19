//Date: 28/10/2019
//Same as Ex01, but use the do - while structure

#include <cstdio>

int main()
{
    int n, S;
    S = 0;
    printf("Input n = ");
    scanf("%d", &n);
    do
    {
        S = S + n;
        n--;
    } while (n > 0);
    printf("S = %d\n", S);
    return 1;
}
