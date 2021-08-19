//Date: 31/10/2019
//Bai 2: Viet chuong trinh xuat ra bang cuu chuong

#include <cstdio>

int main()
{
    printf("Day la chuong trinh in ra bang cuu chuong!\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("\nBang nhan %d\n", i);
        for (int j = 0; j <= 10; j++)
            printf("%d * %d = %d\n", i, j, i * j);
    }
    return 1;
}
