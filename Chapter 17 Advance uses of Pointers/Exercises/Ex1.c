#include <stdio.h>
#include <stdlib.h>

void *my_malloc(size_t n);

int main(void)
{
    int i ;
    //*mymalloc();

    return 0;
}
//correct answer
void *my_malloc(size_t n) {
    void *p;
    if ((p = malloc(n)) == NULL) {
        printf("Error: malloc failed.\n");
        exit(EXIT_FAILURE);
    }
    return p;
}
/* My answer
int *mymalloc(void)
{
    int n , *p;
    printf("How many bytes of memory to be allocated?\n");
    scanf("%d" , &n);

    p = malloc(n * sizeof(*p));
    if ( p == NULL){
        printf("Error : malloc failed\n");
        exit(EXIT_FAILURE);
    }
    return p;
} 
*/