//Date: 28/10/2019
//Tim so nghich dao cua n

#include <cstdio>

int main()
{
    int n;
    int m;
    m = 0;
    printf("Input n = ");
    scanf("%d", &n);
    int nguyen = n;
    int du;
    while (nguyen > 0)
    {
        du = nguyen % 10;
        nguyen = nguyen / 10;
        m = (m * 10) + du;
    }
    printf("m = %d\n", m);
    return 1;
}
