#include <stdio.h>
#include "libft.h"

int     main(void)
{
    /* ft_isdigit test
    printf("%d ", ft_isdigit('/'));
    printf("%d ", ft_isdigit('0'));
    printf("%d ", ft_isdigit('5'));
    printf("%d ", ft_isdigit('9'));
    printf("%d ", ft_isdigit(':'));
    */

    /* ft_isalphabit test
    printf("%d ", ft_isalpha('@'));
    printf("%d ", ft_isalpha('A'));
    printf("%d ", ft_isalpha('Z'));
    printf("%d ", ft_isalpha('['));
    printf("%d ", ft_isalpha('`'));
    printf("%d ", ft_isalpha('a'));
    printf("%d ", ft_isalpha('z'));
    printf("%d ", ft_isalpha('{'));
    */

   /*  ft_isalnum tests
    printf("%d ", ft_isalnum('@'));
    printf("%d ", ft_isalnum('A'));
    printf("%d ", ft_isalnum('z'));
    printf("%d ", ft_isalnum('9'));
    printf("%d ", ft_isalnum('0'));
    printf("%d ", ft_isalnum('/'));
    printf("%d ", ft_isalnum('}'));
   */

    /* ft_isascii tests
    printf("%d ", ft_isascii(0));
    printf("%d ", ft_isascii(27));
    printf("%d ", ft_isascii(128));
    */

    /* ft_isprint tests
    printf("%d ", ft_isprint('\t'));
    printf("%d ", ft_isprint(' '));
    printf("%d ", ft_isprint('-'));
    printf("%d ", ft_isprint('~'));
    printf("%d ", ft_isprint(127));
    */

    /* ft_strlen test
    printf("%lld ", ft_strlen("SuidAfrika"));
    printf("%lld ", ft_strlen("S"));
    printf("%lld ", ft_strlen(" "));
    printf("%lld ", ft_strlen("\0"));
    */
   
    /* ft_memset tests
    char str[50] = "Verskillende mense verenig"; 
    printf("\nBefore ft_memset(): %s\n", str); 
    printf("%p\n", str); 
    printf("%p\n",ft_memset(str , '?', 12 * sizeof(char))); 
    printf("After ft_memset():  %s", str); 
    */

    /* ft_bzero tests
    char array[5];
    ft_memset(array, 'A', sizeof(char) * 4);
    array[4] = '\0';
    printf("%s\n", array);
    ft_bzero(array, sizeof(char) * 5);
    printf("%s\n", array);
    */

    /* ft_memcpy test
    char *src = "Hello";
    char dest[5];
    ft_memset(dest, 'A', sizeof(char) * 4);
    dest[4] = '\0';
    printf("%s\n", dest);
    ft_memcpy(dest, src, 2);
    printf("%s\n", dest);
    */

    /*
   //ft_memmove tests
    char array[] = "IMHELA\0";
    printf("%s\n", array);
    ft_memmove(array + 2, array, 5);
    printf("%s\n", array);
    
    int source[10] = {1,2,3,4,5,6,7,8,9,10};
    ft_memmove(source + 2, source, sizeof(int) * 8);
    for (int i = 0; i < 10; i++)
    printf("%d", *(source + i));
    */

   /* ft_strlcpy tests
    char src[6] = {"Hello\0"};
    char dest[6];
    printf("%lld\n", ft_strlcpy(dest, src, 3));
    printf("%s", dest);
    */
    
    /*
   char source[10] = {"LO\0"};
   char dest[10] = {"HAL\0"};
   ft_strlcat(dest, source, 7);
   printf("%s", dest);
    */
    /*
   char a_lower = 'a';
   char a_upper = 'A';
   char digit = '9';
   char z_lower = 'z';
   char z_upper = 'Z';
   printf("%c\n", ft_toupper(a_lower));
   printf("%c\n", ft_toupper(a_upper));
    printf("%c\n", ft_toupper(digit));
   printf("%c\n", ft_toupper(z_lower));
   printf("%c\n", ft_toupper(z_upper));
   */
/*
  char a_lower = 'a';
   char a_upper = 'A';
   char digit = '9';
   char z_lower = 'z';
   char z_upper = 'Z';
   printf("%c\n", ft_tolower(a_lower));
   printf("%c\n", ft_tolower(a_upper));
    printf("%c\n", ft_tolower(digit));
   printf("%c\n", ft_tolower(z_lower));
   printf("%c\n", ft_tolower(z_upper));
*/

 /* ft_strchr.c
    char * text = "Hello\0";
    printf("%p\n", text + 5);
    printf("%p\n", ft_strchr(text, '\0'));
     printf("%p\n", text + 2);
    printf("%p\n", ft_strchr(text, 'l'));
    printf("%p\n", ft_strchr(text, 'p'));
*/

	
	/*
	// ft_strrchr.c
	char	text[6] = "aaaaa\0";
	printf("%p\n", text + 4);
	printf("%p\n", ft_strrchr(text, 'a'));
	printf("%p\n", text + 5);
	printf("%p\n", ft_strrchr(text, '\0'));
	printf("%p\n", ft_strrchr(text, 'c'));
*/


/*	
        char *text = "Namma";
        printf("%p\n", (text + 3));
        printf("%p\n", ft_memchr(text, 'm', 4));
        return (0);

*/

   return (0);
}
