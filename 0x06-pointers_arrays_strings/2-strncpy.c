#include "main.h"

/**
 * _strncpy - function to copy a strings and return a new string
 * with n elements of the appended string
 *
 * @dest: string 1
 * @src: string 2
 * @n: number of chars to include from appended string
 * Return: char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
        int i= 0;
        int j;
        while (i < n)
        {
                  if (*(src + i) == '\0')
                  {
                          j = i;
                          while (j < n && *(dest + j) != '\0')
                           {
                                   *(dest + j) = '\0';
				   break;s
                                   j++;
				   


                           }
                  }


                *(dest + i) = *(src + i);
                i++;
           }
        return (dest);
}
