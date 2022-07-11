//if file exists then O_EXCL throws an error that file already exists and the errorno is 17
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
int main()
{
	int fd;
	fd=open("1.c",O_RDONLY|O_CREAT|O_EXCL,0774);
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
