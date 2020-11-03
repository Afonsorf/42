#include <stdio.h>
#include <string.h>



int     ft_strcmp(char *s1, char *s2);
int     ft_strncmp(char *s1, char *s2, unsigned int n);
char    *ft_strcat(char *dest, char *src);
char    *ft_strncat(char *dest, char *src, unsigned int n);
char    *ft_strstr(char *str, char *to_find);

unsigned int    ft_strlcat(char *dest, char *src, unsigned int size);

int     main(void)
{
    int value;
    char s1[] = "Hello";
    char s2[] = "Hell";
    
    printf("\n===========ex00========== %c", '\n');
    printf("String 1: %s\n", s1);
    printf("String 2: %s\n", s2);
    printf("Function %d\n", ft_strcmp(s1, s2));
    printf("Command %d\n", strcmp(s1, s2));
    
    printf("\n===========ex01========== %c", '\n');
    char s3[] = "Hello";
    char s4[] = "Hello";
    value = 10;
  
    printf("String 1: %s\n", s3);               //string1
    printf("String 1: %s\n", s4);               //string2
    printf("Search Value: %d\n", value);        //print value
    
    printf("Function %d\n", ft_strncmp(s3, s4, value)); 
    printf("Command %d\n", strncmp(s3, s4, value));
    
    char s5[100] = "Hello ";
    char s6[100] = "my friend!";


    printf("\n===========ex02========== %c", '\n');
    printf("String 1: %s\n", s5);
    printf("String 2: %s\n", s6);
    
    ft_strcat(s5, s6);
    printf("String 1 after ft_strcat(s1, s2): %s\n", s5);


    char s7[100] = "Hello ";
    char s8[100] = "my friend!";
    value = 5;
    
    printf("\n===========ex03========== %c", '\n');
    printf("String 1: %s\n", s7);
    printf("String 2: %s\n", s8);
    printf("ft_strcat() value: %d\n", value);        //print value

    ft_strncat(s7, s8, value);
    printf("String 1 after ft_strcat(s1, s2): %s\n", s7);
   
   
    char s9[50] = "this is a test";
    char s10[50] = "ths";
    char *result;

    result = ft_strstr(s9, s10);

    printf("\n===========ex04========== %c", '\n');
    printf("String 1: %s\n", s9);
    printf("String 2: %s\n", s10);
    if (result)
    {
        printf("!!!VVVvvv...  Needle is in the haysack :) ...vvvVVV!!!");
    } else 
    {
        printf("xxxxxxxxxx Needle is NOT in the haysack :( xxxxxxxxxx");
    }


    char s11[4] = "12";
    char s12[100] = "3456789";
    int strsize = sizeof(s11);
    printf("\n===========ex05========== %c", '\n');
    printf("String 1: %s\n", s11);
    printf("String 2: %s\n", s12);
    printf("s1 total lenght: %d\n\n", strsize);

    int strleng = ft_strlcat(s11, s12, strsize);
    printf("String 1: %s\n", s11);
    printf("ft_strlcat() value: %d\n", strleng);        //print lenght



    
    return (0);
}