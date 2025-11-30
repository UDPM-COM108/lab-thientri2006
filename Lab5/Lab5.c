#include <stdio.h>
#include <math.h>

//dinh nghia ham truoc roi moi tao ham sau
int gia_tri_lon_nhat(int a, int b, int c);
int gia_tri_nho_nhat(int a, int b, int c);
int kiemtranam(int nam);
int kiemtraso(int n);

//Ham bai 1
int gia_tri_lon_nhat(int a, int b, int c) {
    int max = a;
    if(b > max) {
        max = b;
    }
    if(c > max) {
        max = c;
    }
    return max;
}

int gia_tri_nho_nhat(int a, int b, int c) {
    int min = a;
    if(b < min) {
        min = b;
    }
    if(c < min) {
        min = c;
    }
    return min;
}

//Ham bai 2
int kiemtranam(int nam) {
    int flag = 0;
    if(nam % 400 == 0) {
        flag = 1;
    } else if(nam % 4 == 0 && nam % 100 != 0) {
        flag = 1;
    }
    return flag;
}

//Ham bai 3
int kiemtraso(int n) {
    if (n % 5 == 0 && n % 9 == 0) {
        printf("So %d chia het cho 5 va chia het cho 9!!!", n);
    }
    else {
        printf("So %d khong chia het cho 5 va chia het cho 9!!!", n);
    }
}

int main() {
    //Bai 1
    int a,b,c;
    printf("Nhap vao a va b va c: ");
    scanf("%d %d %d",&a,&b,&c);

    printf("\nGia tri lon nhat la: %d",gia_tri_lon_nhat(a,b,c));
    printf("\nGia tri lon nhat la: %d",gia_tri_nho_nhat(a,b,c));

    //Bai 2
    int nam;
    printf("\nNhap vao nam: ");
    scanf("%d",&nam);

    if(kiemtranam(nam)) {
        printf("%d la nam nhuan",nam);
    }
    else {
        printf("%d khong la nam nhuan",nam);
    }
    // Bai 3
    int n;
    do {
        printf("\nNhap 1 so bat ky trong khoang [1,1000]: ");
        scanf("%d", &n);
        //Kiem tra xem so do co phai la so khac khoang [1,1000] khong, neu so do khac thi lap lai
        if (n < 1 || n > 1000) {
            printf("Bạn đã nhập sai vui lòng nhập lại từ khoảng [1,1000]");
        }
    } while (n < 1 || n > 1000);
    //Neu so do la so trong khoang [1,1000] thi goi ham kiem tra so de kiem tra xem so do co chia het cho 5 va 9 khong
    kiemtraso(n);

    return 0;
}