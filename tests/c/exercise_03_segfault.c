/* The following code compiles but has segfaults. How would you fix them? */
#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
    const char* name = argv[1];
    char name_copy[8] = "";

    printf("Hello World, my name is %s\n", name);

    strcpy(name_copy, name);

    printf("Hey! I copied my name %s\n", name_copy);

}