#include "libft.h"

size_t ft_strlen(const char *strlen){
    size_t l= 0;
    while (strlen[l]!= '\0'){l++;}
    return (l);}

//cuenta el numero de caracteres de un string