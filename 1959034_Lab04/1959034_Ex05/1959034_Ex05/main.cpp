//Date: 28/10/2019
//S3 = 1 + 1/2 + ... + 1/n

#include <cstdio>

int main()
{
    int n;
    float S;
    S = 0.0;
    printf("Input n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        S = S + 1.0/i;
    printf("S = %f\n", S);
    return 1;
}
