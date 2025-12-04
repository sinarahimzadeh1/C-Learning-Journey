/// how to output :
//  gcc main.c -lpthread

#include <stdio.h>
#include <pthread.h>
// use threads lib

void *chape2()
{
    printf("Hello from thread!\n");
    return NULL;
}

int main()
{
    /// variable 'pthread_t' type
    pthread_t th1;

    pthread_create(&th1, NULL, chape2, NULL);
    /* 4 option ->  1- variable name,
                    2- pthread option,
                    3- Function name,
                    4- Function input */

    // 'pthread_create' -> start the thread

    pthread_join(th1, NULL);
    /*  It executes the main thread and
        gives the program a chance to run  */

    return 0;
}