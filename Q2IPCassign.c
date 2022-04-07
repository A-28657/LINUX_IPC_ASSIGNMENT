#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
//#define KEY 8979
int main()
{
int qid;
struct msqid_ds buf;
qid=msgget(49,IPC_CREAT|0644);
printf("qid=%d\n",qid);
msgctl(qid,IPC_RMID,NULL);
printf("Here are the details of the queue\n");
printf("no of msg's in a q %hi\n",buf.msg_qnum);
printf("no. of bytes i n q %d\n",buf.msg_cbytes);
printf("max no. pf bytes in q %hi\n",buf.msg_qbytes);
}

