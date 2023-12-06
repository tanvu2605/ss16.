#include <stdio.h>

struct SinhVien {
    char hoTen[50];
    int tuoi;
    char soDienThoai[15];
    char email[50];
};

int main() {
	int i; 
    int soLuong;
    printf("Nhap so luong sinh vien: ");
    scanf("%d", &soLuong);

    struct SinhVien dsSinhVien[soLuong];

    FILE *file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Khong the mo tep tin students.txt de ghi.\n");
        return 1;
    }

    for (i = 0; i < soLuong; ++i) {
        printf("\nNhap thong tin sinh vien thu %d:\n", i + 1);

        printf("Ho ten: ");
        scanf("%s", dsSinhVien[i].hoTen);

        printf("Tuoi: ");
        scanf("%d", &dsSinhVien[i].tuoi);

        printf("So dien thoai: ");
        scanf("%s", dsSinhVien[i].soDienThoai);

        printf("Email: ");
        scanf("%s", dsSinhVien[i].email);

        fprintf(file, "%s %d %s %s\n", dsSinhVien[i].hoTen, dsSinhVien[i].tuoi, dsSinhVien[i].soDienThoai, dsSinhVien[i].email);
    }

    fclose(file);

    printf("Da luu thong tin sinh vien vao tep tin students.txt.\n");

    return 0;
}

