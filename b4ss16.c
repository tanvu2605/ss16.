#include <stdio.h>

int main() {

    FILE *file = fopen("bt03.txt", "r");

   
    if (file == NULL) {
        printf("Khong the mo tep tin bt03.txt de doc.\n");
        return 1; 
    }

  
    printf("Noi dung tu tep tin bt03.txt:\n");

    char ch;
    int lineCount = 0;

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);

    
        if (ch == '\n') {
            lineCount++;
        }
    }

 
    fclose(file);

  
    printf("\nSu dung trong tep tin: %d\n", lineCount);

    return 0; 
}

