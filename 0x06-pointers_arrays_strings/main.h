#ifndef _MAIN_H_
#define _MAIN_H_


/*
 *  *
 *
 *   * * HEADER FILES
 *
 *    *
 *
 *     * * Once-only header- If a header file happens to be included twice,
 *
 *      *
 *
 *       * * the compiler will process its contents twice and it will result in an error
 *
 *        *
 *
 *         * */




char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);





#endif
