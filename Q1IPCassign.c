#include<stdio.h>
#include<sys/types.h>
#include<sys/shm.h>
#include<sys/ipc.h>

int main()
{
char *p;
int id;
id=shmget(48,250,IPC_CREAT|0644);
if(id<0)
{
perror("shmget");
return 0;
}
printf("id=%d\n",id);
p=shmat(id,0,0);
printf("Enter the data:");
scanf("%s",p);
return 0;
}
