#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdlib.h>

int _putchar(char);
void print_name(char *name, void(*f)(char *));
void array_iterator(int *, size_t, void (*)(int));
int int_index(int *, int size, int (*cmp)(int));

#endif
