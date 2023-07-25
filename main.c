#include <io.h>
#include <stdio.h>
#include <fcntl.h>

void  main(int argc, char const *argv[])
{
    int fd;
    char lect;
    int statut;

    fd = open("/dev/ttyS2", O_RDWR);

    if (fd > 0)
    {
        printf("le numero du descripteur est %s\n", fd);
    }
    while (statut > 0){
        statut = read(fd, &lect, 1);
        printf("%s\n", lect);
    }

    close(fd);

}