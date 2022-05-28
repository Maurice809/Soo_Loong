#ifndef FT_CHECK_FILE_H
#define FT_CHECK_FILE_H

#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stdio.h>

typedef struct Person{
  char *firstname;
   char *lastname;
    int age;
} t_Person;

void ft_print(Person *me);
char *ft_strjoin(char *s, char c);

#endif
