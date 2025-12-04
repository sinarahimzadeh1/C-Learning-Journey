#include <stdio.h>

void main() {
    FILE *f;
    f = fopen("SystemPath\\data.txt", "w");
    fprintf(f, "%s", "Hello World!");
    fclose(f);
}