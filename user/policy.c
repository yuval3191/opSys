#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    if (argc < 2)
        exit(-1,"wrong argv");
    else{
        int n = atoi(argv[1]);
        int check = set_policy(n);
        printf("return val: %d\n",check);
        exit(check,"tesk 7!\n");
    }
    
}
