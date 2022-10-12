/* The following code compiles and works as expected. However it is not maintainable
   nor modular. Could you address the following points:

    - How would you remove the if/else control statements (without using switch)?
    - How would you add a multiplication operation into your refactored code?
*/
#include <stdio.h>
#include <stdint.h>

int main()
{
    uint8_t ch = 0;
    int16_t a = 15, b = 10;

    printf("Enter Choice: 0 for add and 1 for subtract\n");
    scanf("%hhd", &ch);

    if (ch > 1) return 0;

    if (ch == 0) {
        printf("Addition: %d\n", a + b);
    } else if (ch == 1) {
        printf("Subtraction: %d\n", a - b);
    }

    return 0;
}