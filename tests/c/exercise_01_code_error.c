/* The following code compiles correctly but something is wrong with it.

    - Could you identify what is the problem?
    - How would you solve it?
*/
#include <stdlib.h>

typedef struct {
    int number;
    float value;

    int* elements;
    size_t n_elements;
} foo_t;

int main()
{

    foo_t* foo = calloc(1, sizeof(foo_t));
    if (foo) {
        foo->number = 10;
        foo->value = 3.1415;
        foo->n_elements = 30;
        foo->elements = calloc(foo->n_elements, sizeof(int));
    }

    free(foo);

    return 0;

}


