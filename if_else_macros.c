#include <stdio.h>

int main()
{

#if VERBOSE >= 2
    printf("Trace Message");
#endif
    return 0;
}