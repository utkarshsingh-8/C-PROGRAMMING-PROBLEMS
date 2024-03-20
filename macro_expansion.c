#include <stdio.h>
#define MULTIPLYy(a, b) a *b
#define MULTIPLY(c, d) (c) * (d)

int main()
{
    // The macro is expanded as 2 + 3 * 3 + 5, not as 5*8
    printf("%d\n", MULTIPLYy(2 + 3, 3 + 5)); // Output: 16

    // The macro is expanded as (2 + 3) * (3 + 5), as 5*8
    printf("%d\n", MULTIPLY(2 + 3, 3 + 5)); // Output: 40

    return 0;
}
