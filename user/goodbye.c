#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    if (fork() == 0){
        set_ps_priority(2);
    }
    exit(0,"good bye world! i love u all\n");
}
