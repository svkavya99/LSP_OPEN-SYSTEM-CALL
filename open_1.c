#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
int main()
{
int fd;
fd=open("1.c",O_WRONLY);
printf("%d",fd);
if(fd == -1)
{
printf("open() failed -errorno=%d\n",errno);
perror("ERROR:");
}
else
{
printf("OPEN IS SUCESS\n");
//printf("%d",fd);
}
}

