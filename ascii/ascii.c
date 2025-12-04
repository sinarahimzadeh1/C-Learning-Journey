#include <stdio.h>
#include <string.h>

int main() {
    
    char text[500];

    printf("\nEnter something : ");
    scanf("%s", &text);


    for (int i = 0; i < strlen(text); i++)
    {
        // print ascii code of a string character
        printf("%d\n", text[i]);
    }
}