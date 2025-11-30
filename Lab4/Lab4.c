#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int luachon;
    do
    {
        printf("\n==================== MENU ====================\n");
        printf("1. TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2\n");
        printf("2. XÁC ĐỊNH SỐ NGUYÊN TỐ\n");
        printf("3. XÁC ĐỊNH SỐ CHÍNH PHƯƠNG\n");
        printf("0. Thoát menu\n");
        printf("===============================================\n");

        printf("Nhập lựa chọn của bạn: ");
        scanf("%d", &luachon);

        switch (luachon) {
            case 1:
            printf("Chức năng số 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2\n");
            // #BÀI 1: TÍNH TRUNG BÌNH TỔNG CỦA CÁC SỐ TỰ NHIÊN CHIA HẾT CHO 2
            int min, max;
            printf("Nhap min va max: ");
            scanf("%d %d", &min, &max);
            int i = min;
            float tong = 0, bienDem = 0, trungBinh = 0;
            while (i <= max) {
                if (i % 2 == 0) {
                    tong += i;
                    bienDem++;
                }
                i++;
            }
            trungBinh = tong / bienDem;
            printf("Trung binh tong la: %.2f", trungBinh);
            break;

        case 2:
            printf("Chức năng số 2: XÁC ĐỊNH SỐ NGUYÊN TỐ\n");
            // #Bài 2: XÁC ĐỊNH SỐ NGUYÊN TỐ
            int x;
            printf("\nNhap x: ");
            scanf("%d", &x);
            int count = 0;
            int ii;
            for (ii = 2; ii < x; ii++) {
                if (x % ii == 0) {
                    count++;
                }
            }
            if (count == 0) {
                printf("%d là số nguyên tố\n", x);
            }
            else {
                printf("%d không phải số nguyên tố\n", x);
            }
            break;

        case 3:
            printf("Chức năng số 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG\n");
            // #Bài 3: XÁC ĐỊNH SỐ CHÍNH PHƯƠNG
            int x2;
            printf("Nhap vao so nguyen x: ");
            scanf("%d", &x2);

            if (x2 < 0) {
                printf("%d KHONG PHAI la so chinh phuong.\n", x2);
                return 0;
            }
            
            double sqrt_x = sqrt(x2);
            
            int root = (int)sqrt_x;

            printf("\nKet qua:\n");
            if (root * root == x2) {
                printf("So %d LA SO CHINH PHUONG (%d * %d).\n", x2, root, root);
            }
            else {
                printf("So %d KHONG PHAI LA SO CHINH PHUONG.\n", x2);
            }
            break;

        case 0:
            printf("Hẹn gặp lại!!!\n");
            exit(0);
            break;

        default:
            printf("Lựa chọn không hợp lệ!!! Vui lòng chọn lại!!!\n");
            break;
        }
    } while (luachon != 0);

    return 0;
}