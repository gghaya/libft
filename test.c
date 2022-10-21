#include<stdio.h>
#include<fcntl.h>
#include <unistd.h>

int main()
{

    int fd = open("fo4ot.txt",O_WRONLY | O_RDONLY | O_CREAT);
	write(fd,"ghizo",5);
	printf("%d\n",fd);

}
