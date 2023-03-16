#ifndef MAIN_H
#define MAIN_H

/**
 * This is a header file containing all prototype functions used in 0x0B-malloc_free directory
 * it is my library of declared functions
 * Each function is declared by the tasks
 * enclosing the files between #ifndef, #define and #end if ensures files are not processed twice
 * this would resu;t in error
 */

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
char **strtow(char *str);

#endif
