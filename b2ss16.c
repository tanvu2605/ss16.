#include <stdio.h>

int main() {

    FILE *file = fopen("bt01.txt", "r");

 
    if (file == NULL) {
        printf("Khong the mo tep tin bt01.txt de doc.\n");
        return 1; 
    }

   
    printf("Noi dung trong tep tin bt01.txt:\n");

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

  
    fclose(file);

    return 0;
}
