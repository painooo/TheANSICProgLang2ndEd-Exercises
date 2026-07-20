// See what error messages are printed when leaving certain parts of the program out

#include <stdio.h> // note: include ‘<stdio.h>’ or provide a declaration of ‘printf’

int main() { // (Removed int) return type defaults to `int`
        printf("Hello World\n"); // Just doesn't print "Hello World\n"
        return 0; // Still works
}