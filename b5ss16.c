#include <stdio.h>
#include <stdlib.h>

int main() {
   
    FILE *file1 = fopen("bt01.txt", "r");

 
    if (file1 == NULL) {
        printf("Khong the mo tep tin bt01.txt de doc.\n");
        return 1; 
    }

   
    FILE *file2 = fopen("bt03.txt", "r");

 
    if (file2 == NULL) {
        printf("Khong the mo tep tin bt03.txt de doc.\n");
        fclose(file1);
        return 1;
    }

 
    FILE *file3 = fopen("bt5.txt", "w");

 
    if (file3 == NULL) {
        printf("Khong the mo tep tin bt5.txt de ghi.\n");
        fclose(file1);
        fclose(file2);
        return 1; 
    }

   
    char ch;
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, file3);
    }

  
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, file3);
    }

  
    fclose(file1);
    fclose(file2);
    fclose(file3);

    printf("da sao chep noi dung tu bt01.txt và bt03.txt sang bt5.txt.\n");

    return 0;
}
 
