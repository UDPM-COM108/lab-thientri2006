#include <stdio.h>
#include <math.h>

int main() {
    //Gia tri tuyet doi
    int x;
    printf("Nhap x: ");
    scanf("%d",&x);
    printf("\nGia tri tuyet doi la: %d", abs(x));

    //Tim max, min
    int a,b,c, max, min;
    printf("\nNhap a va b va c: ");
    scanf("%d %d %d",&a,&b,&c);
    //Tim Max
    max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("\nGia tri lon nhat max la: %d",max);
    //Tim Min
    min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    printf("\nGia tri nho nhat min la: %d",min);
    
    return 0;
}