#ifndef MAIN_H
#define MAIN_H

/* macro definations */
#define BUFF_SIZE 1024

/* standard headers */
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <stdarg.h>

/* local function definations */
ssize_t read_textfile(const char *, size_t);
int create_file(const char *, char *);
int append_text_to_file(const char *, char *);
void _err_code(int ,int , const void *, ...);

#endif
