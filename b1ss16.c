#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file = fopen("bt01.txt", "w");

  
    if (file == NULL) {
        printf("Khong the mo tep tin bt01.txt de ghi.\n");
        return 1; 
    }

    printf("Nhap chuoi: ");
    char str[100];
    fgets(str, sizeof(str), stdin);

    fprintf(file, "%s", str);


    fclose(file);

    printf("Chuoi da duoc ghi vào tap tin bt01.txt.\n");

    return 0; 
}
