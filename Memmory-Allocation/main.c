#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char *text;
    text = (char*) malloc(100);

    strcpy(text, "sina rahimzadeh\n");

    printf("%s" , text);

    free(text);     // Required
    text = NULL;    // Optional

    // -----------------------------------

    int *i;
    i = (int*) calloc(100, sizeof(int));

    printf("%d\n" , i[0]);

    free(i);     // Required
    i = NULL;

    // -----------------------------------

    int realSize = 5;

    char *text2;
    text2 = (char *)malloc(realSize);
    strcpy(text2, "sina");

    for (int i = 0; i < 10; i++)
    {
        realSize += 3;
        text2 = (char *)realloc(text2, realSize);
        strcat(text2, "123");
    }
    
    printf("%s\n", text2);

    free(text2);  // Required
    text2 = NULL; // Optional

    return 0;
}
