#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
int main()
{
char s[20];
int fd;

printf("before open()...\n");
fd=open("newfifo11",O_RDONLY);
printf("After open()....\n");
read(fd,s,sizeof(s));
printf("data:%s\n",s);
return 0;
}
