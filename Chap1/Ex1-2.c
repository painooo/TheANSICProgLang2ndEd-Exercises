// Find out what happens if the escape sequence is not one which is listed

#include <stdio.h>

int main() {
        printf("Following are listed escape sequences:\n");
        
        printf("\\n: a\nb");
        printf("\n-----\n"); // Seperator
        printf("\\t: a\tb");
        printf("\n-----\n"); // Seperator
        printf("\\b: a\bb");
        printf("\n-----\n"); // Seperator
        printf("\\\": a\"b");
        printf("\n-----\n"); // Seperator
        printf("\\\\: a\\b");
        printf("\n");
        
        printf("Following are (some) not listed escape sequences:\n");
        
        printf("\\g: a\gb"); // Reports unknown escape sequence
        printf("\n-----\n"); // Seperator
        printf("\\h: a\hb"); // Reports unknown escape sequence
        printf("\n"); // Seperator
        
        return 0;
}