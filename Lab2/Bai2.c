#include <stdio.h>

int main()
{
    float cdai, crong, chuvi, dientich;
    printf("Nhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%f %f", &cdai, &crong);
    chuvi = (cdai + crong) * 2;
    dientich = cdai * crong;
    printf("Chu vi hinh chu nhat la: %.2f", chuvi);
    printf("\nDien tich hinh chu nhat la: %.2f", dientich);
    return 0;
}