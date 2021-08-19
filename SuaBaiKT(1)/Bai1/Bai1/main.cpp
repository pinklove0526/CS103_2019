//Date: 31/10/2019
//Bai 1: Viet chuong trinh xet so hoan hao

#include <cstdio>

int main()
{
    unsigned int S, x;
    S = 0;
    printf("Hay nhap vao 1 so nguyen duong: ");
    scanf("%d", &x);
    for (int i = 1; i < x; i++)
    {
        if (x % i == 0)
            S = S + i;
        if (S == x)
            printf("%d la so hoan hao\n", x);
        else
            printf("%d khong phai la so hoan hao\n", x);
    }
    return 1;
}
