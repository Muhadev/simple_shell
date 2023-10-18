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
char *case_sense(char *s);
int comp_command(char *s1, char *s2);
void delete_mem(char **array, int size);
int opt_out_cmd(char *file);
int list_inputs(char *arr1, char **arr2);
int result_prompt(const char *num, unsigned int len);
int error_message(char **s, int add);
void opt_out_last(char *array);
char *handle_builtin(char *file_loc, char *built_in);
char *handle_environ(char *stat_inputs);
int exec_process(char **s);
int count_digits(int num);
int confirm_cmd(char **s, int check);
extern char **environ;
int confirm_paths(char **s);
int main(void);
#endif /* SHELL_H */
