#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<errno.h>
int main()
{
int fd;
fd=open("2.log",O_RDWR|O_CREAT,S_IRWXU|S_IRWXG|S_IROTH);
if(fd == -1)
{
printf("open fails errno=%d\n",errno);
perror("ERROR:");
}
else
{
printf("OPEN SUCESS");	
}
return 0;
}
