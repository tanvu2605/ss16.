#include <stdio.h>
#include <stdlib.h>

int main() {
   int i; 
    FILE *file = fopen("bt3.txt", "w");

   
    if (file == NULL) {
        printf("Khong the mo tep tin bt3.txt de ghi.\n");
        return 1; 
    }

   
    int numLines;
    printf("Nhap so dong: ");
    scanf("%d", &numLines);

   
    while (getchar() != '\n');


    printf("Nhap noi dung tung dong:\n");

    for (i = 0; i < numLines; ++i) {
        char line[100];
        printf("Dong %d: ", i + 1);
        fgets(line, sizeof(line), stdin);
        fprintf(file, "%s", line);
    }

 
    fclose(file);

  
    file = fopen("bt3.txt", "r");

  
    if (file == NULL) {
        printf("Khong the mo tep tin bt3.txt de doc.\n");
        return 1; 
    }

    
    printf("\nNoi dung tu tep tin bt3.txt:\n");

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }


    fclose(file);

    return 0; 
}
