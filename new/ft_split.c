#include "libft.h"
#include <stdio.h>


char **ft_split(const char *s, char c)
{
   int (*myPointerTo2DimArray)[ROWS][COLUMNS]
   // allocate an array big enough to hold all the words in s
   char	**words[ft_word_count(s, c)];
   // loop over the string and find the start of the word 
      // find the end of the word 
         // copy the world at the first free index in our words array 
   // return our words array 
}


static int ft_word_count(const char *s, char c)
{
   int	w_c;
   int	s_i;

   w_c = 0;
   s_i = 0;
   while (s[s_i])
   {
	   if (s[s_i] == c && w_c == 0 && s[s_i - 1] != '\0')
		   w_c++;
	   if(s[s_i] == c && s[s_i + 1] != '\0')
	   	w_c++;
	s_i++;
   }
   return (w_c);
}

/*
static void ft_free( whatever argument you need )
{
   // free EVERYTHING you allocated 
   // each element of the array as well as the array 
}
*/
/*
static char *fill_word( whatever argument you need )
{
    allocate enough room for the word 
    copy the word into the memory you allocated above 
	 return the allocated word 
}
*/
int	main(void)
{
	char *s = "hello;helloh";
	printf("%s %d\n", s, ft_word_count(s, ';'));
	
	char *s1 = ";fhg";
	printf("%s %d\n", s1, ft_word_count(s1, ';'));


	char *s2 = "fhg;";
	printf("%s %d\n", s2, ft_word_count(s2, ';'));

	
	char *s3 = ";fh;g;f";
	printf("%s %d\n", s3, ft_word_count(s3, ';'));

	return (0);
}
