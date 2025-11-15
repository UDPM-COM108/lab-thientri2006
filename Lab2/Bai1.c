#include <stdio.h>

int main()
{
    int x, y, tong, hieu;
    printf("Nhap vao hai so nguyen x va y: ");
    scanf("%d %d", &x, &y);
    tong = x + y;
    hieu = x - y;
    printf("Tong cua hai so nguyen x va y la: %d", tong);
    printf("\nHieu cua hai so nguyen x va y la: %d", hieu);
    return 0;
}