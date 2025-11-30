#include <stdio.h>

int main()
{
    /*
    double diem;
    printf("Nhap diem cua ban: ");
    scanf("%lf", &diem);

    if (diem >= 5)
    {
        printf("Dau!!!");
    }
    else
    {
        printf("Rot$$$$");
    }

    if (diem >= 9)
    {
        printf("\nXep loai: xuat sac");
    }
    else if (diem >= 8 && diem < 9)
    {
        printf("\nXep loai: gioi");
    }
    else if (diem >= 7 && diem < 8)
    {
        printf("\nXep loai: kha");
    }
    else if (diem >= 5 && diem < 7)
    {
        printf("\nXep loai: trung binh");
    }
    else if (diem >= 3 && diem < 5)
    {
        printf("\nXep loai: yeu");
    }
    else
    {
        printf("\nXep loai: kem");
    }
    */
    printf("Viet Nam co bao nhieu dan toc anh em:\n");
    printf("a. 52\nb. 53\nc. 54\nd. 55\n");
    printf("Xin moi ban chon dap an (a,b,c,d): ");
    char dapAn;
    scanf("%s", &dapAn);
    switch (dapAn)
    {
    case 'a':
        printf("Ban da chon sai\n");
        break;
    case 'b':
        printf("Ban da chon sai\n");
        break;
    case 'c':
        printf("Ban da chon dung\n");
        break;
    case 'd':
        printf("Ban da chon sai\n");
        break;
    default:
        printf("Ban chon khong dung bo dap an (a,b,c,d)");
        break;
    }
}