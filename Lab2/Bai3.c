#include <stdio.h>
#define PI 3.14

int main()
{
    float bankinh, chuviHT, dientichHT;
    printf("Nhap vao ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    chuviHT = 2 * PI * bankinh;
    dientichHT = PI * bankinh * bankinh;
    printf("Chu vi hinh tron la: %.2f", chuviHT);
    printf("\nDien tich hinh tron la: %.2f", dientichHT);
    return 0;
}
