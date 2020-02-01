/*
** EPITECH PROJECT, 2019
** OPEN WRITE MALLOC
** File description:
** my_buffer.c
*/

#include "my.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

char *my_buffer(char const *filepath, int size)
{
    char *buffer = malloc(sizeof(char) * size + 1);
    int fd = 0;

    buffer[size] = '\0';
    fd = open(filepath, O_RDONLY);
    read(fd, buffer, size);
    close(fd);
    if (buffer[size - 1] == '\0' || buffer[size - 1] == '\n')
        return (buffer);
    size++;
    my_buffer(filepath, size);
}
