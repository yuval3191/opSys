#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
    set_cfs_priority(2);
    int* rtime  = (int*)malloc(sizeof(int));
    int* retime = (int*)malloc(sizeof(int));
    int* stime  = (int*)malloc(sizeof(int));
    int* pri    = (int*)malloc(sizeof(int));
    


    if (fork() == 0){
        set_cfs_priority(0);
        sleep(15);
    }
    else if (fork() == 0){
        set_cfs_priority(1);
        sleep(40);
    }else
        sleep(72);
    for (int i = 0; i < 1000000; i++)
    {
        if (i %100000 == 0){
            int pid = getpid();
            get_cfs_priority(pid,rtime,retime,stime,pri);
            printf("pid: %d \t rtime: %d \t retime:%d \t stime:%d \t priority:%d \n",pid,*rtime,*retime,*stime,*pri);
            sleep(30);
        }
    }
    

    exit(0,"fook me!\n");
}
