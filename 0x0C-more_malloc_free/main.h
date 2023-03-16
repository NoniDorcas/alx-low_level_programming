#ifndef MAIN_H
#define MAIN_H

/**
 * This is a library containing all prototype functions used in 0x0C-more_malloc_free directory
 * is is a header file containing all prototype functions declarations defined by the tasks
 * it is enclosed between ifndef, define and endif to stop the compiler from processing these files twice hence causing error
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
