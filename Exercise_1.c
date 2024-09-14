#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void  ft_putstr(char *text)
{
  int index;

  index = 0;
  while (*(text + index))
  {
    write(1, text + index, 1);
    index++;
  }
    write(1, "\n", 1);
}

int   get_string_size(char *string)
{
    int index;
    int counter;

    index = 0;
    counter = 0;
    while (*(string + index))
    {
        counter++;

        index++;
    }

    return (counter);
}

void  ft_copy(char *dest, char *src)
{
      int   dest_size = get_string_size(dest);
      int   index;
      index = 0;
      while (index < dest_size)
      {
            dest[index] = *(src + index);
            index++;
      }
      dest[index] = '\0';
}

char  *ft_concat(char *dest, char *src)
{
      int   dest_size = sizeof(char) * get_string_size(dest);
      int   src_size = sizeof(char) * get_string_size(src);
      char  *result = malloc(dest_size + src_size);
      int   result_index;
      int   src_index;

      result_index = dest_size;
      src_index = 0;
      ft_copy(result, dest);
      while (result_index < (dest_size + src_size))
      {
        result[result_index] = src[src_index];
        result_index++;
        src_index++;
      }

      return (result);
}

int   main(int argc, char **argv)
{
  if (argc < 2)
  {
      ft_putstr("Hello, you handsome beast!");
 
  }
  else
  {
      char  *dest = "H";
      char  *src = "M";
      ft_copy(dest, src);
      printf("%s \n", dest);
      //ft_putstr(ft_concat("Hello, ", argv[1]));
      printf("%s ", ft_concat("Hello, ", argv[1]));
  }
  return (0);
}