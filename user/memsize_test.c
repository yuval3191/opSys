#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    int size = memsize();
    printf("%d\n",size);
    int* mal = (int*)(malloc(20000));
    size = memsize();
    printf("%d\n",size);
    free(mal);
    size = memsize();
    printf("%d\n",size);
    exit(0,"im out 0");
}
