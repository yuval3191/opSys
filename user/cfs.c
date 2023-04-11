#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    set_cfs_priority(2);
    if (fork() == 0){
        set_cfs_priority(0);
    }
    else if (fork() == 0){
        set_cfs_priority(1);
    }
    for (int i = 0; i < 1000000; i++)
    {
        if (i %100000 == 0){
            sleep(30);
            int pid = getpid();
            uint64 rtime;
            uint64 retime;
            uint64 stime;
            uint64 pri;
            get_cfs_priority(pid,&rtime,&retime,&stime,&pri);
            printf("pid: %d \t rtime: %d \t retime:%d \t stime:%d \t priority:%d \n",pid,rtime,retime,stime,pri);
        }
    }
    

    exit(0,"fook me!\n");
}
