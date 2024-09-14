char *ft_strchr(const char *s, int c)
{
    int     index;

    index = 0;
    while (s[index] != '\0')
    {   
        if (s[index] == c)
            return (char *)(s + index);
        index++;
    }
    if (c == '\0')
        return (char *)(s + index);
    return '\0';
}