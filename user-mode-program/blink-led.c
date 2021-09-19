#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main ()
{
	int f = open("/proc/lll-gpio", O_RDWR);

	while (1)
	{
		write(f, "21,1", 4);
		usleep(500000);
		write(f, "21,0", 4);
		usleep(500000);
	}
}
