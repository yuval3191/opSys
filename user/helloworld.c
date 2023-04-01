#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    char buff[] = "hello world xv6\n";
    write(1,buff,strlen(buff));
    exit(0,"im out 0");
}
