//Date: 30/10/2019
//Bai 1: Viet chuong trinh nhap 1 so nguyen duong, xuat
//- So chu so le, so chu so chan
//- Tong cac chu so
//- Xuat ra cac uoc so cua so do
//Bai 2: Viet chuong trinh xuat ra do dai cac tam giac vuong, biet
//- Do dai canh la so nguyen
//- Cac canh co do dai <= 1000 (luu y: khong duoc trung)

#include <cstdio>

int main()
{
    int N, DemLe = 0, DemChan = 0, Tong = 0, DemUoc = 0, Tam;
    printf("Nhap so nguyen duong: ");
    scanf("%d", &N);
    //Cau 1: Dem chan le
    Tam = N;
    while (Tam != 0)
    {
        int DV = Tam % 10;
        if (DV % 2 == 0)
            DemChan++;
        else
            DemLe++;
        Tong += DV;
        Tam /= 10;
    }
    printf("%d co %d so le, %d so chan\n", N, DemLe, DemChan);
    //Cau 2: Tinh tong cac chu so
    printf("Tong cac chu so la %d\n", Tong);
    //Cau 3: Dem uoc so
    for (int i = 1; i <= N; i++)
    {
        if (N % i == 0)
        {
            printf("%d\n", i);
            DemUoc++;
        }
    }
    printf("%d co %d uoc so\n", N, DemUoc);
    //Bai 2: Tam giac vuong
    int DemTamGiac = 0;
    for (int i = 5; i <= 1000; i++)
    {
        for (int j = 1; j < i; j++)
        {
            for (int k = 1; k < j; k++)
            {
                if (i * i == j * j + k * k)
                {
                    printf("%d_%d_%d\n", i, j, k);
                    DemTamGiac++;
                }
            }
        }
    }
    printf("Tim duoc %d tam giac vuong\n", DemTamGiac);
}
