#ifndef SHEEL_H
#define SHELL_H


/* C LIBRARY */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>
#include <sys/wait.h>


/* C MACROS */
#define clear() printf("\033[H\033[J")


/* C DECLARATION */
extern int exitcode;
extern int errorcount;


/* STRING MANIPULATION */
int _putchar(char c);
int str_len(char *s);
char *str_dup(char *s);
int str_cmp(char *s1, char *s2);
char *str_tok(char *string, char *delim)


/* SHELL CHECK */
int return_check(char *input);
int path_check(char *p);
int env_check(char *input);
int exit_check(char *input, char *COMM);


/* SHELL ENV */
void get_env(char **env);
char **path_array(char **env);
int path_counter(char *path);
char *get_path(char **path_array, char *token);


/* SHELL ERROR */
void exit_err(char *COMM, char *input);
void command_execute_err(__attribute__((unused))char *COMM, char *message);
void command_not_found_err(char *COMM, char *message);
void privilege_err(char *COMM, char *message);


/* SHELL PROCESS */
void process_fork(char **commands, char **arr, char **env, char *COMM, char *input);


/* SHELL MEMORY */
void free_arr(char **arr);


/* SHELL INTEGERS */
int atoi_(char *str);
void print_num(int num);



#endif
