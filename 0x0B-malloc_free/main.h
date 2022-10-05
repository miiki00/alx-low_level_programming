#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>

char *create_array(unsigned int, char);
char *_strdup(char *);
char *str_concat(char *, char *);
int **alloc_grid(int, int);
void free_grid(int **, int);
char *argstostr(int, char **);
char **strtow(char *str);
int count_word_index(unsigned int, char *);
int count_word(char *);

#endif
