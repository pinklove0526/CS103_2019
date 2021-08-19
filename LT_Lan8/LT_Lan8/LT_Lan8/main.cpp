//Date: 27/11/2019

#include <cstdio>
#include <cmath>

#define max 100

struct phanso
{
    int tu;
    int mau;
};

void nhapphanso(phanso& n);
void xuatphanso(phanso n);
int timucln(int a, int b);
void rutgon(phanso& n);
phanso tong(phanso& n, phanso& m);
phanso tich(phanso& n, phanso& m);
bool latoigian(phanso n);
int laamhayduong(phanso n);
int sosanh(phanso a, phanso b);

int main()
{
    phanso a, b;
    nhapphanso(a);
    xuatphanso(a);
    nhapphanso(b);
    xuatphanso(b);
    rutgon(a);
    rutgon(b);
    tong(a, b);
    tich(a, b);
    latoigian(a);
    latoigian(b);
    laamhayduong(a);
    laamhayduong(b);
    sosanh(a, b);
    return 1;
}

void nhapphanso(phanso& n)
{
    printf("Nhap tu: ");
    scanf("%d", &n.tu);
    do
    {
        printf("Nhap mau: ");
        scanf("%d", &n.mau);
    } while (n.mau == 0);
}

void xuatphanso(phanso n)
{
    printf("Phan so %d / %d\n", n.tu, n.mau);
}

int timucln(int a, int b)
{
    if (a == 0 || b == 0)
        return a + b;
    while (a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    return a;
}

void rutgon(phanso& n)
{
    int ucln = timucln(abs(n.tu), abs(n.mau));
    n.tu = n.tu / ucln;
    n.mau = n.mau / ucln;
}

phanso tong(phanso& x1, phanso& x2)
{
    phanso ketqua;
    ketqua.tu = x1.tu * x2.mau + x1.mau * x2.tu;
    ketqua.mau = x1.mau * x2.mau;
    rutgon(ketqua);
    return ketqua;
}

phanso tich(phanso& x1, phanso& x2)
{
    phanso ketqua;
    ketqua.tu = x1.tu * x2.tu;
    ketqua.mau = x1.mau * x2.mau;
    rutgon(ketqua);
    return ketqua;
}

bool latoigian(phanso n)
{
    if (timucln(abs(n.tu), abs(n.mau)) == 1)
        return true;
    else
        return false;
}

int laamhayduong(phanso n)
{
    int tich = n.tu * n.mau;
    if (tich == 0)
        return 0;
    else
    {
        if (tich > 0)
            return 1;
        else
            return -1;
    }
}

int sosanh(phanso a, phanso b)
{
    float f1, f2;
    f1 = a.tu * 1.0 / a.mau;
    f2 = b.tu * 1.0 / b.mau;
    if (f1 == f2)
        return 0;
    else
    {
        if (f1 > f2)
            return 1;
        else
            return -1;
    }
}
