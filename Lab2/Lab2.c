// chu thich khoi lenh /*...*/
#include <stdio.h>
#define PI 3.14
#include <math.h>

int main()
{
    // #BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH +- 2 SỐ
    int x, y, tong, hieu;
    printf("Nhap vao hai so nguyen x va y: ");
    scanf("%d %d", &x, &y);
    tong = x + y;
    hieu = x - y;
    printf("Tong cua hai so nguyen x va y la: %d", tong);
    printf("\nHieu cua hai so nguyen x va y la: %d", hieu);

    // #BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN
    float cdai, crong, chuvi, dientich;
    printf("\nNhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%f %f", &cdai, &crong);
    chuvi = (cdai + crong) * 2;
    dientich = cdai * crong;
    printf("Chu vi hinh chu nhat la: %.2f", chuvi);
    printf("\nDien tich hinh chu nhat la: %.2f", dientich);

    // #Bài 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN
    float bankinh, chuviHT, dientichHT;
    printf("\nNhap vao ban kinh hinh tron: ");
    scanf("%f", &bankinh);
    chuviHT = 2 * PI * bankinh;
    dientichHT = PI * bankinh * bankinh;
    printf("Chu vi hinh tron la: %.2f", chuviHT);
    printf("\nDien tich hinh tron la: %.2f", dientichHT);

    // #Bài 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH BIẾT RẰNG HỆ SỐ CỦA TOÁN LÀ X3, LÝ LÀ X2, HÓA LÀ X1
    float Toan, Ly, Hoa, DiemTB;
    printf("\nNhap vao diem Toan, Ly, Hoa: ");
    scanf("%f %f %f", &Toan, &Ly, &Hoa);
    DiemTB = (Toan * 3 + Ly * 2 + Hoa * 1) / 6;
    printf("Diem trung binh la: %.2f", DiemTB);

    // #Bài 5: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TAM GIÁC VUÔNG
    float a, b, c, chuviHTG, dientichHTG;
    printf("\nNhap do dai hai canh goc vuong: ");
    scanf("%f %f", &a, &b);
    c = sqrt(a * a + b * b); // tính cạnh huyền
    chuviHTG = a + b + c;
    dientichHTG = (a * b) / 2;
    printf("Chu vi tam giac = %.2f\n", chuviHTG);
    printf("Dien tich tam giac = %.2f\n", dientichHTG);

    return 0;
}