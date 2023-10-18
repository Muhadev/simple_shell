#ifndef SHELL_H
#define SHELL_H
#include <time.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <limits.h>
int _putchar(char ch);
int size_cmd(const char *arr);
char case_sense(char *s);
int comp_command(char *s1, char *s2);
#endif /* SHELL_H */
